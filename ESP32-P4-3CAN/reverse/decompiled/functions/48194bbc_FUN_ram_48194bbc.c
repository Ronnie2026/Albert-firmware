/* Firmware entry: 0x48194bbc */

undefined4 FUN_ram_48194bbc(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar2 = 0x102;
    }
    else {
      iVar1 = *(int *)*param_2;
      do {
        iVar3 = FUN_ram_48194df0();
      } while (iVar3 != 0);
      iVar1 = FUN_ram_48194dfe(param_1,(iVar1 + 1) * 4);
      uVar2 = 0xc004;
      if ((1 < iVar1 - 2U) && (uVar2 = 0xc005, iVar1 != 1)) {
        uVar2 = 0;
      }
      thunk_FUN_ram_4ff209c6(param_2);
      FUN_ram_4818ba30();
      FUN_ram_48194d18();
      FUN_ram_48132780(0);
      FUN_ram_4813269e(0);
      FUN_ram_4813244e(0);
      FUN_ram_481323ba(0);
      FUN_ram_48132634(0);
      FUN_ram_48132232();
    }
    return uVar2;
  }
  return 0x102;
}


