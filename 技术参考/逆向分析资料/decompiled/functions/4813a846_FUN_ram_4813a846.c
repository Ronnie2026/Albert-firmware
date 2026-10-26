/* Firmware entry: 0x4813a846 */

int FUN_ram_4813a846(char *param_1)

{
  int *piVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar2 = atoi(param_1 + 2);
  piVar1 = DAT_ram_4ff6e1ac;
  if (((uVar2 & 0xff) != 0) || (param_1[2] == '0')) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
      if ((((uint)*(byte *)((int)piVar1 + 0xea) == (uVar2 & 0xff)) &&
          (*param_1 == *(char *)(piVar1 + 0x3a))) && (param_1[1] == *(char *)((int)piVar1 + 0xe9)))
      {
        return (int)piVar1;
      }
    }
  }
  return 0;
}


