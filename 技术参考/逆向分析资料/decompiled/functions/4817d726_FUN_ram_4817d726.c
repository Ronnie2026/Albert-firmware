/* Firmware entry: 0x4817d726 */

undefined4 FUN_ram_4817d726(int param_1)

{
  undefined4 uVar1;
  undefined4 in_a4;
  int in_a5;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x184) == 0) {
    uStack_44 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    if (in_a5 - 4U < 0xd) {
      uStack_40 = __bswapdi2(*(uint *)(param_1 + 0x148) << 3,
                             *(uint *)(param_1 + 0x148) >> 0x1d | *(int *)(param_1 + 0x14c) << 3);
      uStack_38 = __bswapdi2(*(int *)(param_1 + 0x150) << 3,0);
      FUN_ram_4817cedc(param_1,&uStack_40,0x10,param_1 + 0x10);
      uVar1 = FUN_ram_4817ba42(param_1 + 0x15c,in_a5,&uStack_44,param_1 + 0x130,&uStack_30,
                               param_1 + 0x10,in_a4);
    }
    else {
      uVar1 = 0xffffffec;
    }
    return uVar1;
  }
  uVar1 = FUN_ram_481849c4();
  return uVar1;
}


