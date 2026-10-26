/* Firmware entry: 0x4807b94c */

undefined4 FUN_ram_4807b94c(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *__s;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48129c8a();
  iVar2 = FUN_ram_48129ce8();
  if (iVar2 == 0) {
    return 0;
  }
  __s = *(char **)(iVar1 + 0x10);
  if ((((__s != (char *)0x0) && (param_4 != 0)) && (sVar3 = strlen(__s), sVar3 != 0)) &&
     (sVar3 < param_4)) {
    FUN_ram_4ff45158(param_3,__s,sVar3 + 1);
    return 1;
  }
  return 0;
}


