/* Firmware entry: 0x4808c64a */

char FUN_ram_4808c64a(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((char)param_1[10] != '\0') && (param_1[3] == 1)) &&
     (iVar1 = param_1[7], (char)iVar1 != '\0')) {
    uVar2 = param_1[2];
    if ((uVar2 <= (uint)param_1[1]) && (1 < param_1[1] - uVar2)) {
      *(undefined1 *)(*param_1 + uVar2) = 0x7d;
      iVar3 = param_1[2];
      param_1[2] = iVar3 + 1;
      *(undefined1 *)(iVar3 + 1 + *param_1) = 0;
      param_1[3] = 0;
      return (char)iVar1;
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
  return '\0';
}


