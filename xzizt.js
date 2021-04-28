
var curr_url = window.location.pathname;

if( curr_url.substring(0, 10) == "/Fahrzeug/" ){
    
    if( document.addEventListener ) {                
        document.addEventListener("click", function(){
           console.log( "clickkkk" );
        });
   }else if( document.attachEvent ) {              
        document.attachEvent("onclick", function(){
           console.log( "clickkkk" );
        });
   }
}

