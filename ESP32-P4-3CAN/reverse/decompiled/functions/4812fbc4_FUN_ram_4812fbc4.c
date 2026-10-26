/* Firmware entry: 0x4812fbc4 */

undefined2 FUN_ram_4812fbc4(int param_1)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 1) {
    uVar1 = 9;
  }
  else {
    uVar1 = 0x12;
  }
  uStack_14 = 0;
  FUN_ram_481a60d4(uVar1,1,&uStack_14);
  return uStack_14._2_2_;
}


