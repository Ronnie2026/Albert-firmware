/* Firmware entry: 0x4ff39a8c */

undefined4 FUN_ram_4ff39a8c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_30;
  int iStack_2c;
  uint uStack_28;
  int iStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0x102;
  }
  if (param_2 != 0) {
    iVar2 = FUN_ram_4ff38a6a(&local_30,&iStack_2c);
    if (iVar2 == 0) {
      iVar2 = iStack_2c + 0x18;
      uStack_28 = 0;
      iStack_24 = 0;
      iStack_2c = 0x2a7;
      FUN_ram_4ff38838(iVar2,&iStack_2c,1);
      if (iStack_24 != 0) {
        uVar1 = param_2 - 1U;
        if (uStack_28 < param_2 - 1U) {
          uVar1 = uStack_28;
        }
        FUN_ram_4ff45594(param_1,iStack_24,uVar1);
        *(undefined1 *)(param_1 + uVar1) = 0;
        thunk_FUN_ram_4812fb50(local_30);
        return 0;
      }
      thunk_FUN_ram_4812fb50(local_30);
      uVar3 = 0x105;
    }
    else {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
  return 0x102;
}


