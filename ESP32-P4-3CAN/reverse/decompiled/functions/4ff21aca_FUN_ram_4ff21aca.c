/* Firmware entry: 0x4ff21aca */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff21aca(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_410 [256];
  undefined4 uStack_10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar6 = (undefined4 *)&DAT_ram_5008e000;
  puVar4 = local_410;
  do {
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *puVar4 = *puVar6;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
    puVar4[3] = uVar3;
    puVar6 = puVar6 + 4;
    puVar4 = puVar4 + 4;
  } while (puVar6 != (undefined4 *)0x5008e400);
  _DAT_ram_500e51a4 = 7;
  _DAT_ram_5008e37c = 0x1c00;
  uVar5 = _DAT_ram_5012d034 >> 0x12 & 7;
  if (((uVar5 >> 2 ^ uVar5 >> 1 ^ uVar5) & 1) == 0) {
    _DAT_ram_5008e37c = 0xc00;
  }
  _DAT_ram_5008e380 = 0;
  ets_delay_us(1);
  puVar6 = local_410;
  puVar4 = (undefined4 *)&DAT_ram_5008e000;
  _DAT_ram_500e60c0 = _DAT_ram_500e60c0 & 0xfd7fffff;
  _DAT_ram_500e51a4 = 0;
  do {
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    puVar4[3] = puVar6[3];
    *puVar4 = uVar1;
    puVar4[1] = uVar2;
    puVar4[2] = uVar3;
    puVar6 = puVar6 + 4;
    puVar4 = puVar4 + 4;
  } while (puVar6 != &uStack_10);
  return;
}


