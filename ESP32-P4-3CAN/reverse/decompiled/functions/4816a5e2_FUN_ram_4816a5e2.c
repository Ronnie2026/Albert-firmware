/* Firmware entry: 0x4816a5e2 */

undefined4 FUN_ram_4816a5e2(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  size_t sVar3;
  char *__s;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  __s = (char *)*param_2;
  if (__s != (char *)0x0) {
    uVar1 = 0;
    piVar2 = param_2;
    do {
      sVar3 = strlen(__s);
      piVar2 = piVar2 + 1;
      uVar1 = uVar1 + sVar3;
      if ((0xfe < sVar3 - 1) || (0xffff < uVar1)) {
        return 0xffff8f00;
      }
      __s = (char *)*piVar2;
    } while (__s != (char *)0x0);
  }
  *(int **)(param_1 + 0x68) = param_2;
  return 0;
}


