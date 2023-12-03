import Litem from "./list_item";
import Lmenu from './list_menu';
import data from "../data/data";
import { useState, useEffect } from "react";
import "../../assets/list.css";

const setCategory=[...new Set(data.map((e)=>e.category))];
const category=["전체",...setCategory];
const numCategory=[data.length,...setCategory.map((cate)=>data.reduce((cnt, data)=>cnt+(data.category===cate),0))];
let selectCategory="전체";


function List(){
    const URLSearch = new URLSearchParams(window.location.search);
    let cate = URLSearch.get("cate");
    cate = unescape(cate);
    const [items, setItem]= useState(data);

    useEffect(()=>{
        selectCategory=cate;
        if(selectCategory==="전체") {
            setItem(data);
        }
        else{
            setItem(data.filter(item=>item.category===selectCategory));
        } // 1시간 27분 쯤

    },[]);
//useEffect("함수" , ["배열"]);
// window.location.search : url 관련 쿼리스트링
    return (
        <div id="list">
            <div className="list">
                <h1>{selectCategory}</h1>
                <hr></hr>
                <Lmenu category={category} num={numCategory} />
                <Litem items={items} />
            </div>
        </div>
    )
}

export default List;