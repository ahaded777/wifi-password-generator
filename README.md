<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
  <h1>🖨️ Number Generator to File</h1>

  <p>This program generates a list of numbers between a given <strong>start_number</strong> and <strong>end_number</strong>, formats them with leading zeros to ensure they are exactly 8 digits long, and writes them to a specified file.</p>

  <h2>📜 Table of Contents</h2>
  <ul>
    <li><a href="#introduction">Introduction</a></li>
    <li><a href="#features">Features</a></li>
    <li><a href="#installation">Installation</a></li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#example">Example</a></li>
    <li><a href="#error-handling">Error Handling</a></li>
    <li><a href="#project-structure">Project Structure</a></li>
    <li><a href="#license">License</a></li>
  </ul>

  <hr />

  <h2 id="introduction">🌟 Introduction</h2>
  <p>The <strong>Number Generator to File</strong> program is a simple C program that generates a sequence of numbers, formats them with leading zeros, and writes them to a specified file. The program validates the inputs to ensure the start number is less than the end number and that both are valid positive integers.</p>

  <h2 id="features">✨ Features</h2>
  <ul>
    <li><strong>Number Formatting</strong>: Numbers are padded with leading zeros to be 8 digits long.</li>
    <li><strong>Input Validation</strong>: The program ensures that both the start and end numbers are positive integers and that the start number is smaller than the end number.</li>
    <li><strong>File Output</strong>: The numbers are written to a specified file, allowing for easy storage and sharing.</li>
  </ul>

  <h2 id="installation">🛠 Installation</h2>
  <h3>Prerequisites</h3>
  <p>Before using this program, ensure the following are installed:</p>
  <ul>
    <li><strong>gcc</strong>: A C compiler (e.g., <code>gcc</code>).</li>
  </ul>

  <h3>Clone the Repository</h3>
  <pre><code>git clone git@github.com:yourusername/number-generator.git
cd number-generator</code></pre>

  <h2 id="usage">⛏ Usage</h2>
  <p>The program takes 3 arguments:</p>
  <ul>
    <li><strong>start_number</strong>: The starting number for the sequence.</li>
    <li><strong>end_number</strong>: The ending number for the sequence.</li>
    <li><strong>file_name</strong>: The name of the file where the numbers will be written.</li>
  </ul>
  <p>Run the program like this:</p>
  <pre><code>gcc num_generator -o (name_program Of your choice)
./name_program &lt;start_number&gt; &lt;end_number&gt; &lt;file_name&gt;</code></pre>

  <h2 id="example">📝 Example</h2>
  <h3>Running the Program:</h3>
  <p>If you want to generate numbers from <code>1</code> to <code>10</code> and save them in <code>output.txt</code>, run:</p>
  <pre><code>./name_program 1 10 output.txt</code></pre>
  <p>This will create the following content in <code>output.txt</code>:</p>
  <pre><code>00000001
00000002
00000003
00000004
00000005
00000006
00000007
00000008
00000009
00000010</code></pre>

  <h2 id="error-handling">🚨 Error Handling</h2>
  <p>The program handles several types of errors:</p>
  <ul>
    <li><strong>Missing Arguments</strong>: If you do not provide the required arguments, it will display an error message and usage instructions.</li>
    <li><strong>Invalid Numbers</strong>: If the start or end number is non-numeric or less than 0, it will show an error.</li>
    <li><strong>Start Number Greater than End Number</strong>: The program will alert if the start number is greater than or equal to the end number.</li>
  </ul>

  <h2 id="project-structure">📁 Project Structure</h2>
  <pre><code>└── number-generator
└── README.md           # Project documentation</code></pre>

  <h2 id="license">📚 License</h2>
  <p>This program is open-source.</p>

  <hr />

  <p>Enjoy using the program and happy coding!</p>
</body>
</html>
