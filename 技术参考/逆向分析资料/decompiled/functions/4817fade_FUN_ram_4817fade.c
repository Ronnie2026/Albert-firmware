/* Firmware entry: 0x4817fade */

int FUN_ram_4817fade(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = FUN_ram_48180076(param_3);
  uVar1 = 1;
  if (uVar2 != 0) {
    uVar1 = uVar2;
  }
  uVar2 = *param_1;
  if ((param_2 <= uVar2) && (uVar1 <= uVar2 - param_2)) {
    *param_1 = uVar2 - uVar1;
    iVar3 = FUN_ram_48180138(param_3,uVar2 - uVar1,uVar1);
    if (iVar3 != 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar3;
    }
    if ((*(short *)(param_3 + 4) == 1) && (pcVar4 = (char *)*param_1, *pcVar4 < '\0')) {
      if ((int)((int)pcVar4 - param_2) < 1) {
        return -0x6c;
      }
      *param_1 = (uint)(pcVar4 + -1);
      uVar1 = uVar1 + 1;
      pcVar4[-1] = '\0';
    }
    iVar3 = FUN_ram_4817fa5a(param_1,param_2,uVar1);
    if (-1 < iVar3) {
      uVar2 = *param_1;
      if (0 < (int)(uVar2 - param_2)) {
        *param_1 = uVar2 - 1;
        *(undefined1 *)(uVar2 - 1) = 2;
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar3 + uVar1 + 1;
      }
    }
  }
  return -0x6c;
}


