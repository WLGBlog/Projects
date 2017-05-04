[![Capture.png](https://s4.postimg.org/no4jsuyfx/Capture.png)](https://postimg.org/image/ajyzg66e1/)

    <html>
      <head></head>
      <body>
        <div id="pbarcontainer">
          <div id="pbar"></div>
        </div>
        <style>
          #pbarcontainer {
            width: 100%;
            height: 20px;
            background-color: #232323;
            border-radius: 20px;
          }
          #pbar {
            width: 0%;
            height: 20px;
            background-color: #38ff84;
            border-radius: 20px;
            -webkit-transition-duration: 0.4s; 
            transition-duration: 0.4s;
          }
        </style>
        <script>
            var pbar = document.getElementById("pbar");

            function pbarIncrease(length) {
               pbar.style.width = length + "%";
            }

            pbarIncrease(50);
        </script>
      </body>
    </html>
