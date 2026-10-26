/* Firmware entry: 0x48166954 */

int FUN_ram_48166954(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *__s1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *(int *)(param_1 + 0x18);
  __s1 = *(char **)(iVar2 + 0x3c);
  if (__s1 == (char *)0x0) {
    return 0;
  }
  iVar1 = strcasecmp(__s1,"Location");
  if (iVar1 == 0) {
    iVar1 = FUN_ram_481693ec(iVar2 + 0x34,param_2,param_3);
  }
  else {
    iVar1 = strcasecmp(__s1,"Transfer-Encoding");
    if ((iVar1 == 0) && (iVar1 = FUN_ram_4ff4511a(param_2,"chunked",param_3), iVar1 == 0)) {
      *(undefined1 *)(*(int *)(iVar2 + 0x24) + 0x2c) = 1;
      goto LAB_ram_481669ac;
    }
    iVar1 = strcasecmp(__s1,"WWW-Authenticate");
    if (iVar1 != 0) goto LAB_ram_481669ac;
    iVar1 = FUN_ram_481693ec(iVar2 + 0x38,param_2,param_3);
  }
  if (iVar1 == 0) {
    return -1;
  }
LAB_ram_481669ac:
  iVar2 = FUN_ram_481693ec(iVar2 + 0x40,param_2,param_3);
  return -(uint)(iVar2 == 0);
}


