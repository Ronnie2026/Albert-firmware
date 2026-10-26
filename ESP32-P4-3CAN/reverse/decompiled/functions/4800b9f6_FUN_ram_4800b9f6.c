/* Firmware entry: 0x4800b9f6 */

undefined4 FUN_ram_4800b9f6(uint param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uStack_1c;
  uint uStack_18;
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (5 < param_1) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart_num error\n",uVar3,
                     &DAT_ram_481b4c88,"uart_get_tx_buffer_free_size",0x6b6);
    return 0x102;
  }
  piVar1 = (int *)(&DAT_ram_4ff5a014 + param_1 * 4);
  iVar5 = *piVar1;
  if (iVar5 == 0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart driver error\n",uVar3,
                     &DAT_ram_481b4c88,"uart_get_tx_buffer_free_size",0x6b7);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0x102;
  }
  if (param_2 == (int *)0x0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): arg pointer is NULL\n",uVar3,
                     &DAT_ram_481b4c88,"uart_get_tx_buffer_free_size",0x6b8);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0x102;
  }
  if ((*(int *)(iVar5 + 0x38) == 0) ||
     (iVar5 = FUN_ram_4ff368f4(*(undefined4 *)(iVar5 + 0x60)), iVar5 == 0)) {
    *param_2 = 0;
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0;
  }
  uVar2 = FUN_ram_4ff368ca(*(undefined4 *)(*piVar1 + 0x60));
  uStack_1c = 0;
  uStack_18 = 0;
  iStack_14 = 0;
  FUN_ram_4ff36946(*(undefined4 *)(*piVar1 + 0x60),&uStack_1c,0,0,&uStack_18,&iStack_14);
  if (uStack_18 == uStack_1c) {
    iVar5 = 0;
    if (iStack_14 != 0) goto LAB_ram_4800ba9c;
    uVar6 = *(int *)(*piVar1 + 0x38) - 8;
  }
  else if (uStack_1c < uStack_18) {
    uStack_18 = ((uVar2 + 5) * 2 & 0xfffffffc) - uStack_18;
    if (uStack_18 < 9) {
      iVar5 = 0;
      uVar6 = 0;
      if (uStack_1c < 9) goto LAB_ram_4800ba9c;
    }
    else {
      uVar6 = uStack_18 - 8 & 0xfffffffc;
      if (uVar2 < uVar6) {
        uVar6 = uVar2;
      }
      if (uStack_1c < 9) goto LAB_ram_4800ba92;
    }
    uVar4 = uStack_1c - 8 & 0xfffffffc;
    if (uVar2 < uVar4) {
      uVar4 = uVar2;
    }
    uVar6 = uVar6 + uVar4;
  }
  else {
    if (uStack_1c - uStack_18 < 9) {
      iVar5 = 0;
      goto LAB_ram_4800ba9c;
    }
    uVar6 = (uStack_1c - uStack_18) - 8 & 0xfffffffc;
    if (uVar2 < uVar6) {
      uVar6 = uVar2;
    }
  }
LAB_ram_4800ba92:
  if (uVar6 < 0x14) {
    uVar6 = 0x14;
  }
  iVar5 = uVar6 - 0x14;
LAB_ram_4800ba9c:
  *param_2 = iVar5;
  return 0;
}


