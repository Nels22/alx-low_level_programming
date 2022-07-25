## 0x15. C - File I/O

The concepts applied in this project tasks focus on system calls, file descriptors and the open(), read(), write() in C programming.

* <a href ="https://github.com/Nels22/alx-low_level_programming/tree/master/0x15-file_io/test_files">test_files : </a> 
  Test cases provided in the task questions.
  
<table>
      <tr> <td> <b> Task </td> 
           <td> <b> File Name </td> 
           <td> <b> Description of Function </td> 
      </tr>
      <tr><td> 0. Tread lightly, she is near </td>
          <td> <a href ="https://github.com/Nels22/alx-low_level_programming/blob/master/0x15-file_io/0-read_textfile.c">0-read_textfile.c </a></td>
          <td>Function reads a text file and prints it to the POSIX standard output.</td>
      </tr>
       <tr><td> 0. Tread lightly, she is near </td>
          <td> <a href ="https://github.com/Nels22/alx-low_level_programming/blob/master/0x15-file_io/1-create_file.c">1-create_file.c </a></td>
          <td>Function creates a file.
              * where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
              * Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
              * The created file has these permissions: rw-------. If the file already exists, it does not change the permissions.
              * if the file already exists, it is truncated.
              * if filename is NULL return -1
              * if text_content is NULL it creates an empty file</td>
      </tr>
  
</table>



