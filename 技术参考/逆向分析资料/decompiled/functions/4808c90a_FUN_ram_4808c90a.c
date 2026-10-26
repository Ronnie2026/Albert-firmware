/* Firmware entry: 0x4808c90a */

char FUN_ram_4808c90a(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = param_1[10];
  if (((char)iVar1 != '\0') && (param_2 != 0)) {
    uVar2 = param_1[2];
    if ((uVar2 <= (uint)param_1[1]) && (param_3 < param_1[1] - uVar2)) {
      FUN_ram_4ff45158(*param_1 + uVar2);
      iVar3 = param_1[2];
      param_1[2] = param_3 + iVar3;
      *(undefined1 *)(*param_1 + param_3 + iVar3) = 0;
      return (char)iVar1;
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
  return '\0';
}


