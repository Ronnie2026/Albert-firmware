/* Firmware entry: 0x4817414e */

int FUN_ram_4817414e(int param_1,int param_2,uint param_3,uint *param_4,char *param_5,uint param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < param_3) {
    return -0x4f80;
  }
  uVar2 = FUN_ram_48180076(param_1 + 4);
  if (*(int *)(param_1 + 0x1c) == 0) {
    return -0x4e80;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *param_4 = uVar2;
    if (param_6 < uVar2) {
      return -0x4f00;
    }
    iVar3 = FUN_ram_48180126(param_2,param_5,uVar2);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (*(int *)(param_1 + 0x1c) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      return 0;
    }
  }
  iVar3 = FUN_ram_481802e8(param_2 + 0x10,0);
  if (iVar3 == 0) {
    if (param_6 != 0) {
      *param_5 = '\0';
      *param_4 = 1;
      return 0;
    }
  }
  else if (param_3 == 0) {
    uVar4 = uVar2 * 2 + 1;
    *param_4 = uVar4;
    if (uVar4 <= param_6) {
      *param_5 = '\x04';
      iVar3 = FUN_ram_48180138(param_2,param_5 + 1,uVar2);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = uVar2 + 1;
      param_2 = param_2 + 8;
LAB_ram_4817420a:
      iVar3 = FUN_ram_48180138(param_2,param_5 + iVar3,uVar2);
      return iVar3;
    }
  }
  else {
    *param_4 = uVar2 + 1;
    if (uVar2 + 1 <= param_6) {
      cVar1 = FUN_ram_4817ffaa(param_2 + 8,0);
      *param_5 = cVar1 + '\x02';
      iVar3 = 1;
      goto LAB_ram_4817420a;
    }
  }
  return -0x4f00;
}


