import '../../assets/list_item.css';
import Like from './list_like';
import {AiOutlineShoppingCart} from 'react-icons/ai';

function Litem({items}) {

    return(
        <div id="items">
        {
            items.map((item)=>{
                const {id, title, des, price, type, img}=item;

                const setType=(type)=>{
                    return(
                        type.map((e)=><img src={`/img/icon_${e}.png`} alt={e}></img>)
                    )
                }

                return (
                    <div id="item" key={id}>
                        <div id="icon"><Like/><AiOutlineShoppingCart size="25px"/></div>
                        <img src = {img} alt={title}/>
                        <div id='des'>
                            <span>{setType(type)}</span>
                            <span className='item_title'>{title}</span>
                            <span className='item_des'>{des}</span>
                            <span className='item_price'>₩ {price}</span>
                        </div>
                    </div>
                )
            })
        }
        </div>
    )
}

export default Litem;