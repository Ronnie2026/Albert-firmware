/* Firmware entry: 0x4802d44a */

undefined4 FUN_ram_4802d44a(int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(byte *)(param_1 + 0x2c) == param_2) {
    iVar3 = 0;
  }
  else if (*(byte *)(param_1 + 0x35a4) == param_2) {
    iVar3 = 1;
  }
  else {
    if (*(byte *)(param_1 + 0x6b1c) != param_2) {
      return 0;
    }
    iVar3 = 2;
  }
  if (param_5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((param_3 < 0x800) && (param_4 <= (int)(0x800 - param_3))) {
      iVar1 = iVar3 * 0x3578 + 0x88c + param_1;
      FUN_ram_4ff3ec14(iVar1,0xffffffff);
      FUN_ram_4ff45158(param_5,(param_3 + 0x2ba + iVar3 * 0xd5e) * 4 + param_1,param_4 << 2);
      FUN_ram_4ff3ee10(iVar1);
      uVar2 = 1;
    }
  }
  return uVar2;
}


