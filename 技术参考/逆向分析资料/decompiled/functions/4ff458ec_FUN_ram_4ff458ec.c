/* Firmware entry: 0x4ff458ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4ff458ec(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uStack_28;
  uint auStack_24 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    return 0x102;
  }
  piVar5 = (int *)*param_1;
  if (((piVar5 == (int *)0x0) || (*piVar5 == 0)) || (piVar5[1] == 0)) {
    return 0x102;
  }
  uVar6 = param_1[4];
  uStack_28 = 0;
  if (uVar6 < 0x10) {
    iVar1 = 0xb;
    while( true ) {
      iVar3 = FUN_ram_4ff4587a(param_1,&uStack_28);
      iVar1 = iVar1 + -1;
      if (iVar3 != 0x6003) break;
      if (iVar1 == 0) {
        return 0x6003;
      }
    }
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  else {
    uStack_28 = *_DAT_ram_4ffbffe8;
  }
  param_1[6] = uStack_28;
  iVar1 = FUN_ram_4ff45788(param_1);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_4ff457c6(param_1), iVar1 != 0)) {
    return iVar1;
  }
  iVar1 = FUN_ram_4ff45880(param_1,auStack_24);
  if (iVar1 != 0) {
    if (DAT_ram_4ff47dac == 0) {
      return iVar1;
    }
    uVar4 = FUN_ram_4ff44d14();
    ets_printf("E (%lu) %s: failed to get chip size\n",uVar4,s_spi_flash_ram_4ff53094);
    return iVar1;
  }
  if (*(code **)(param_1[1] + 0x74) == (code *)0x0) {
    if (DAT_ram_4ff47dac < 2) goto LAB_ram_4ff45978;
    uVar4 = FUN_ram_4ff44d14();
    ets_printf("W (%lu) %s: get_chip_caps function pointer hasn\'t been initialized\n",uVar4,
               s_spi_flash_ram_4ff53094);
  }
  else {
    uVar2 = (**(code **)(param_1[1] + 0x74))(param_1);
    if (((uVar2 & 2) == 0) && (0x1000000 < auStack_24[0])) {
      if (DAT_ram_4ff47dac < 2) {
        auStack_24[0] = 0x1000000;
        goto LAB_ram_4ff45978;
      }
      uVar4 = FUN_ram_4ff44d14();
      ets_printf("W (%lu) %s: Detected flash size > 16 MB, but access beyond 16 MB is not supported for this flash model yet.\n"
                 ,uVar4,s_spi_flash_ram_4ff53094);
      auStack_24[0] = 0x1000000;
    }
  }
  if (2 < DAT_ram_4ff47dac) {
    uVar4 = FUN_ram_4ff44d14();
    ets_printf("I (%lu) %s: flash io: %s\n",uVar4,s_spi_flash_ram_4ff53094,
               &UNK_ram_48235578 + param_1[4] * 10);
  }
LAB_ram_4ff45978:
  iVar1 = (**(code **)PTR_PTR_ram_4ff53080)(param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((0xf < uVar6) ||
     ((iVar1 = (**(code **)(param_1[1] + 0x58))(param_1), iVar1 == 0x108 && (1 < param_1[4] - 4))))
  {
    iVar1 = 0;
  }
  iVar1 = (**(code **)(PTR_PTR_ram_4ff53080 + 4))(param_1,iVar1);
  return iVar1;
}


