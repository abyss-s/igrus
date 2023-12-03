import './App.css';
import List from './commons/components/list'
import { BrowserRouter, Route, Routes } from 'react-router-dom';
import Menu from './commons/components/menu';
import Main from './commons/components/main';
import Footer from './commons/components/Footer';

function App() {
  return (
    <div className="App">
      <BrowserRouter> 
        <Menu></Menu>
        <Routes>
          <Route path="/" element={<Main/>}></Route>
          <Route path="/main" element={<Main/>}></Route>
          <Route path="/list" element={<List/>}></Route>
        </Routes>
        <Footer></Footer>
        </BrowserRouter>
    </div>
  );
}

export default App;
