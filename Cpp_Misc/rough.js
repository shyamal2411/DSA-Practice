// function foo() {console.log("foo");}
// function bar() {console.log("bar");}
// function too() {console.log("too");}

// function f1(){
//     setImmediate(foo);
//     process.nextTick(bar);
// }

// function f2(){
//     f1();
//     process.nextTick(too);
// }

// f2();


// function f(){
//     try{
//         throw '1';
//     } catch(e){
//         console.log('2'); throw e;
//     } finally{
//         return true;
//     }
// }

// try{
//     console.log(f());
// } catch(e){
//     console.log('3');
// }
// finally{
//     console.log('4');
// }

// const MultipleEffects = () =>{
//     useEffect(() => {
//         const clicked = () => console('window clicked')
//         window.addEventListener('click', clicked)

//         return () => {
//             window.addEventListener('click', clicked)           
//         }
//     }, [])

//         useEffect(() => {
//             console.log("another useEffect call");
//         })

//         return <div>
//             Something done
//         </div>
// }



const MultipleEffects = () => {
    useEffect(() => {
      const clicked = () => console.log("window clicked");
      window.addEventListener("click", clicked);
  
      return () => {
        window.removeEventListener("click", clicked);
      };
    }, []);
  
    useEffect(() => {
      console.log("another useEffect call");
    });
  
    return <div>Something done</div>;
  };
  