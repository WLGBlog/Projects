**Try out this Educational Style Quiz Today!**

[![Screen Shot 2017-04-21 at 5.50.26 AM.png](https://s25.postimg.org/vlki75qpr/Screen_Shot_2017-04-21_at_5.50.26_AM.png)](https://postimg.org/image/cgh8xec1n/)

**Code:**


    <!DOCTYPE html>
    <html>
    <head>
    <meta charset="UTF-8">
    <style>
    div {
          border-radius: 20px;
        }
        #test_q {
          background-color: #AAA;
          padding: 10px 40px 40px 40px;
        }
        body {
          font-family: sans-serif;
          background-color: AAA;
          color: #EEE;
        }
        #pbc {
          width: 100%;
          height: 16px;
          background: #444;
          border-radius: 10px;
          margin-bottom: 20px;
        }
        #pbc>#pb {
          position: relative;
          top: 0px;
          background: #1D4;
          width: 0%;
          height: 16px;
          color: #0FF;
          text-align: center;
          border-radius: 10px;
        }
        #Result {
          margin-top: 50px;
          width: 100%;
          height: 100px;
          max-height: 100px;
          background-color: lightgreen;
          position: absolute;
          margin-bottom: 25px;
          border-radius: 20px;
          border: 0px;
          display: none;
          margin-left: 10px;
          -webkit-transition-duration: 0.4s; 
          transition-duration: 0.4s;
        }
        #Result:hover {
          background-color: #4CAF50; 
          color: white;
        }
        #result {
          color: green;
          text-align: left;
          margin-left: 5px;
          display: none;
        }
        #sub-button {
          -webkit-transition-duration: 0.4s; 
          transition-duration: 0.4s;
          background-color: white; 
        }
    </style>
    <script>
          var pos = 0,
           test, test_status, question, choice, choices, chA, chB, chC, correct = 0;
         var questions = [
           ["What is num equal to?", "6", "5", "Potato", "A", "A Variable is something that can store data, like a number or a String (Some text). They can be written as an int or as a string. EXAMPLE: ", "https://s1.postimg.org/nqvwnr0un/Untitled.png"],
           ["What is 7 x 3?", "21", "24", "25", "A"],
           ["What is 8 / 2?", "10", "2", "4", "C"]
         ];
         function _(x) {
           return document.getElementById(x);
         }
         function renderQuestion() {
           test = _("test_q");
           text = _("test_t");
           if (pos >= questions.length) {
             test.innerHTML = "<h2>You got " + correct + " of " + questions.length + " questions correct</h2>";
             document.getElementById("result").innerHTML = "Test Completed";
             pos = 0;
             correct = 0;
             return false;
           }
           var BarPercent = (100 / questions.length) * (pos + 1);
           var pb = document.getElementById("pb");
           pb.style.width = BarPercent + "%";
           var qresult = false;
           question = questions[pos][0];
           chA = questions[pos][1];
           chB = questions[pos][2];
           chC = questions[pos][3];
           info = questions[pos][5];

           if (questions[pos][5] === undefined) {
             info = ""
           }
           if (questions[pos][6] !== undefined) {
             img = questions[pos][6];
           } else {
             img = ""
           }
           test.innerHTML = "<h4 style='color: #DDD;'>" + info + "</h3><br><img src='" + img + "' style='align: center; width: 50%;'>";
           test.innerHTML += "<h3>" + question + "</h3>";
           test.innerHTML += "<input type='radio' name='choices' value='A'> " + chA + "<br>";
           test.innerHTML += "<input type='radio' name='choices' value='B'> " + chB + "<br>";
           test.innerHTML += "<input type='radio' name='choices' value='C'> " + chC + "<br><br>";
           test.innerHTML += "<button id='sub_button'style='color: green; background-color: #CCC; border: 0px; width: 100%; text-align: left; font-weigth: 100px; font-size: 70px; border-radius: 20px;' onclick='checkAnswer()'>Check</button>";
         }
         function showResult(correct) {
             if (correct === true) {
               document.getElementById("Result").style.display = "block";
               document.getElementById("result").style.display = "block";
               document.getElementById("result").innerHTML = "Correct!";
             }
             else {
               document.getElementById("Result").style.display = "block";
               document.getElementById("result").style.display = "block";
               document.getElementById("result").innerHTML = "Incorrect!";
             }
         }
         function reRender(){
           pos++;
           renderQuestion();
           document.getElementById("Result").style.display = "none";
         }
         function checkAnswer() {
           choices = document.getElementsByName("choices");
           for (var i = 0; i < choices.length; i++) {
             if (choices[i].checked) {
               choice = choices[i].value;
             }
           }
           if (choice == questions[pos][4]) {
             correct++;
             qresult = true;
             showResult(qresult);
           }
           else {
             showResult(false);
           }

         }
         window.addEventListener("load", renderQuestion, false);
    </script>
    </head>
    <body>
      <div id="pbc">
        <div id="pb">
        </div>
      </div>
    <div id="test_q"></div>
    <button id="Result" onclick="reRender()">
      <h1 id="result"></h1>
    </button>
    </body>
    </html>
