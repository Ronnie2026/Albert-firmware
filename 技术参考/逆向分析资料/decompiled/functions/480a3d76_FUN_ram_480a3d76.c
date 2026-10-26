/* Firmware entry: 0x480a3d76 */

undefined4 FUN_ram_480a3d76(int param_1,undefined4 param_2)

{
  char *__s;
  int iVar1;
  size_t sVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48129ce8();
  if ((iVar1 != 0) && (__s = *(char **)(param_1 + 0x10), __s != (char *)0x0)) {
    sVar2 = strlen(__s);
    if (0x40 < sVar2) {
      return 0;
    }
    FUN_ram_4ff45158(param_2,__s,sVar2 + 1);
    return 1;
  }
  return 0;
}


