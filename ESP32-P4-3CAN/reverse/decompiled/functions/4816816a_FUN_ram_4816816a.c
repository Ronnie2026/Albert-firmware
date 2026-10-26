/* Firmware entry: 0x4816816a */

int FUN_ram_4816816a(int *param_1)

{
  char *__s1;
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (int *)0x0) {
    __s1 = (char *)param_1[0xd];
    if (__s1 == (char *)0x0) {
      iVar1 = 0x102;
    }
    else if ((((char *)param_1[0x13] == (char *)0x0) ||
             (iVar1 = strcasecmp((char *)param_1[0x13],"https"), iVar1 != 0)) ||
            (iVar1 = strncasecmp(__s1,"https://",8), iVar1 == 0)) {
      iVar1 = FUN_ram_4816763e(param_1,__s1);
      if (iVar1 == 0) {
        param_1[3] = 1;
        *param_1 = *param_1 + 1;
      }
    }
    else {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"HTTP_CLIENT",
                       "E (%lu) %s: HTTPS origin can only redirect to https:// targets (got %s). Set disable_auto_redirect and handle manually if intended.\n"
                       ,uVar2,"HTTP_CLIENT",param_1[0xd]);
      iVar1 = 0x700d;
    }
    return iVar1;
  }
  return 0x102;
}


