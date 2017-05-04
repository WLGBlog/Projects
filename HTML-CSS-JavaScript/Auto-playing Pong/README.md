Want to relax? Watch some auto-playing pong.

[![Capture.png](https://s27.postimg.org/o8b09c4z7/Capture.png)](https://postimg.org/image/ol2efin8v/)

        <html>

        <head></head>

        <body>
          <div>
            <canvas width="400px" height="400px" background-color="black" id="canvas"></canvas>
          </div>
          <style>
            #canvas {
              width:400px;
              height:400px;
              background-color: black;
            }
            div {
              text-align: center;
            }
          </style>
          <script>
            var c=document.getElementById("canvas");
            var ctx=c.getContext("2d");

            var WIDTH = c.width;
            var HEIGHT = c.height;
            var boxWidth = 30;
            var boxHeight= 30;
            var bX = WIDTH/2-boxWidth/2;
            var bY = HEIGHT/2-boxHeight/2;
            var Xspeed = 10;
            var Yspeed = 7;

            var barHeight = 100;
            var barWidth = 20;
            var pY = HEIGHT;
            var pX = WIDTH-boxWidth;
            var p2X = boxWidth/3;

            function render() {

              ctx.clearRect(0, 0, ctx.canvas.width, ctx.canvas.height); 
              ctx.fillStyle = "white";
              ctx.fillRect(bX, bY, boxWidth, boxHeight); 

              ctx.fillRect(pX, pY, barWidth, barHeight);

              ctx.fillRect(p2X, pY, barWidth, barHeight);

            }

            function control() {
              bX+= Xspeed;
              bY+= Yspeed;
              pY = bY - barHeight/2+boxHeight/2;
              if (bX>=WIDTH-boxWidth) {
                Xspeed *= -1;
              }
              if (bX<=0) {
                Xspeed *= -1;
              }
              if (bY<=0) {
                Yspeed *= -1;
              }
              if (bY>=HEIGHT-boxHeight) {
                Yspeed *= -1;
              }
              if (bX >= WIDTH-barWidth-boxWidth) {
                Xspeed *= -1;
              }
              if (bX <= barWidth+p2X) {
                Xspeed *= -1;
              }
              if (pY <= 0){
                pY = 0;
              }
              if (pY >= HEIGHT-barHeight){
                pY = HEIGHT-barHeight;
              }

            }

            function main() {
              control();
              render();
            }

            main();
            var run = setInterval(main, 30);
          </script>
        </body>

        </html>
