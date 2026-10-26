/* Firmware entry: 0x4819b398 */

char * FUN_ram_4819b398(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  switch(param_2) {
  case 0:
    return "Success";
  case 1:
    return "Not owner";
  case 2:
    return "No such file or directory";
  case 3:
    return "No such process";
  case 4:
    return "Interrupted system call";
  case 5:
    return "I/O error";
  case 6:
    return "No such device or address";
  case 7:
    return "Arg list too long";
  case 8:
    return "Exec format error";
  case 9:
    return "Bad file number";
  case 10:
    return "No children";
  case 0xb:
    return "No more processes";
  case 0xc:
    return "Not enough space";
  case 0xd:
    return "Permission denied";
  case 0xe:
    return "Bad address";
  case 0x10:
    return "Device or resource busy";
  case 0x11:
    return "File exists";
  case 0x12:
    return "Cross-device link";
  case 0x13:
    return "No such device";
  case 0x14:
    return "Not a directory";
  case 0x15:
    return "Is a directory";
  case 0x16:
    return "Invalid argument";
  case 0x17:
    return "Too many open files in system";
  case 0x18:
    return "File descriptor value too large";
  case 0x19:
    return "Not a character device";
  case 0x1a:
    return "Text file busy";
  case 0x1b:
    return "File too large";
  case 0x1c:
    return "No space left on device";
  case 0x1d:
    return "Illegal seek";
  case 0x1e:
    return "Read-only file system";
  case 0x1f:
    return "Too many links";
  case 0x20:
    return "Broken pipe";
  case 0x21:
    return "Mathematics argument out of domain of function";
  case 0x22:
    return "Result too large";
  case 0x23:
    return "No message of desired type";
  case 0x24:
    return "Identifier removed";
  case 0x2d:
    return "Deadlock";
  case 0x2e:
    return "No lock";
  case 0x3c:
    return "Not a stream";
  case 0x3d:
    return "No data";
  case 0x3e:
    return "Stream ioctl timeout";
  case 0x3f:
    return "No stream resources";
  case 0x43:
    return "Virtual circuit is gone";
  case 0x47:
    return "Protocol error";
  case 0x4a:
    return "Multihop attempted";
  case 0x4d:
    return "Bad message";
  case 0x58:
    return "Function not implemented";
  case 0x5a:
    return "Directory not empty";
  case 0x5b:
    return "File or path name too long";
  case 0x5c:
    return "Too many symbolic links";
  case 0x5f:
    return "Operation not supported on socket";
  case 0x68:
    return "Connection reset by peer";
  case 0x69:
    return "No buffer space available";
  case 0x6a:
    return "Address family not supported by protocol family";
  case 0x6b:
    return "Protocol wrong type for socket";
  case 0x6c:
    return "Socket operation on non-socket";
  case 0x6d:
    return "Protocol not available";
  case 0x6f:
    return "Connection refused";
  case 0x70:
    return "Address already in use";
  case 0x71:
    return "Software caused connection abort";
  case 0x72:
    return "Network is unreachable";
  case 0x73:
    return "Network interface is not configured";
  case 0x74:
    return "Connection timed out";
  case 0x75:
    return "Host is down";
  case 0x76:
    return "Host is unreachable";
  case 0x77:
    return "Connection already in progress";
  case 0x78:
    return "Socket already connected";
  case 0x79:
    return "Destination address required";
  case 0x7a:
    return "Message too long";
  case 0x7b:
    return "Unknown protocol";
  case 0x7d:
    return "Address not available";
  case 0x7e:
    return "Connection aborted by network";
  case 0x7f:
    return "Socket is already connected";
  case 0x80:
    return "Socket is not connected";
  case 0x86:
    return "Not supported";
  case 0x8a:
    return "Illegal byte sequence";
  case 0x8b:
    return "Value too large for defined data type";
  case 0x8c:
    return "Operation canceled";
  case 0x8d:
    return "State not recoverable";
  case 0x8e:
    return "Previous owner died";
  }
  if (param_4 == 0) {
    param_4 = param_1;
  }
  pcVar1 = (char *)FUN_ram_4819b710(param_2,param_3,param_4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  return pcVar1;
}


