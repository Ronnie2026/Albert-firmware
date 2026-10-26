/* Firmware entry: 0x48009e12 */

undefined4 FUN_ram_48009e12(uint param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (5 < param_1) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart_num error\n",uVar2,
                     &DAT_ram_481b4c88,"uart_pattern_queue_reset",0x26c);
    return 0xffffffff;
  }
  if (*(int *)(&DAT_ram_4ff5a014 + param_1 * 4) == 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart driver error\n",uVar2,
                     &DAT_ram_481b4c88,"uart_pattern_queue_reset",0x26d);
    uVar2 = 0x103;
  }
  else {
    iVar3 = FUN_ram_4ff206d8(param_2 << 2,0x1000);
    if (iVar3 == 0) {
      return 0x101;
    }
    iVar1 = param_1 * 0x38 + 0x4ff48230;
    FUN_ram_4ff3ec14(iVar1,0xffffffff);
    iVar4 = *(int *)(&DAT_ram_4ff5a014 + param_1 * 4);
    uVar2 = *(undefined4 *)(iVar4 + 0x34);
    *(int *)(iVar4 + 0x30) = param_2;
    *(int *)(iVar4 + 0x34) = iVar3;
    *(undefined4 *)(iVar4 + 0x2c) = 0;
    *(undefined4 *)(iVar4 + 0x28) = 0;
    FUN_ram_4ff3ee10(iVar1);
    thunk_FUN_ram_4ff209c6(uVar2);
    uVar2 = 0;
  }
  return uVar2;
}


