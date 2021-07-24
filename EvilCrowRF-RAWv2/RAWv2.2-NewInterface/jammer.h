const char Jammer[] PROGMEM = R"=====(
<html>
<head>
    <title>Jammer Config</title>
    <meta charset="utf-8">
    <link rel="stylesheet" href="style.css">
    <script src="lib.js"></script> 
</head>
<body>
<body>
<nav id='menu'>
  <input type='checkbox' id='responsive-menu' onclick='updatemenu()'><label></label>
  <ul>
    <li><a href='/'>Home</a></li>
    <li><a class='dropdown-arrow'>Config</a>
      <ul class='sub-menus'>
        <li><a href='/txconfig'>RAW TX Config</a></li>
        <li><a href='/txbinary'>Binary TX Config</a></li>
        <li><a href='/rxconfig'>RX Config</a></li>
        <li><a href='/btnconfig'>Button TX Config</a></li>
      </ul>
    </li>
    <li><a class='dropdown-arrow'>RX Log</a>
      <ul class='sub-menus'>
        <li><a href='/viewlog'>RX Logs</a></li>
        <li><a href='/delete'>Delete Logs</a></li>
        <li><a href='/downloadlog'>Download Logs</a></li>
        <li><a href='/cleanspiffs'>Clean SPIFFS</a></li>
      </ul>
    </li>
    <li><a href='/jammer'>Simple Jammer</a></li>
  </ul>
</nav>
<br>
<FORM action="/setjammer" method="post" id="config" target="iframe">
    <p>Module: </p>
    <label class="custom-select" for="styledSelect1">
    <select name="module" form="config" id="styledSelect1">
       <option value="1">Module 1</option> 
       <option value="2">Module 2</option> 
    </select>
    </label>
    <hr>
    <p>Frequency: </p><textarea class="css-input-text" form="config" rows="1" cols="50" name="frequency"></textarea>
    <hr>
    <p>Power Jammer: </p><textarea class="css-input-text" form="config" rows="1" cols="50" name="powerjammer"></textarea>
    <hr>
    <INPUT type="radio" name="configmodule" value="2" hidden="1" checked="checked">
    <INPUT class="button-submit" type="submit" value="Jammer">
</form>
<hr>
<FORM action="/stopjammer" method="post" id="config" target="iframe">
    <INPUT class="button-submit" type="submit" value="Stop">
</form>
<br>
<hr>
<br>
<iframe style="visibility: hidden;" src="http://" )+local_IPstr+"/setrx" name="iframe"></iframe>
</body>
</html>
)=====";
