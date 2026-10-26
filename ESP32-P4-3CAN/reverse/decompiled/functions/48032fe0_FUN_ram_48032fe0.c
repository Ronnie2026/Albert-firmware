/* Firmware entry: 0x48032fe0 */

void FUN_ram_48032fe0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = FUN_ram_48025ba6();
  uVar1 = DAT_ram_4ff47ea0;
  if ((DAT_ram_4ff48b58 != '\0') && (param_1 < 10)) {
    puVar2 = &DAT_ram_4ff4899c + param_1 * 10;
    uVar4 = *puVar2;
    fence();
    *puVar2 = uVar4 + 1 | 1;
    fence();
    fence();
    (&DAT_ram_4ff489a0)[param_1 * 10] = uVar3;
    (&DAT_ram_4ff489a4)[param_1 * 10] = param_2;
    (&DAT_ram_4ff489a8)[param_1 * 10] = uVar1;
    (&DAT_ram_4ff489ac)[param_1 * 10] = param_3;
    (&DAT_ram_4ff489b0)[param_1 * 10] = param_4;
    (&DAT_ram_4ff489b4)[param_1 * 10] = param_5;
    (&DAT_ram_4ff489b8)[param_1 * 10] = param_6;
    (&DAT_ram_4ff489bc)[param_1 * 10] = param_7;
    (&DAT_ram_4ff489c0)[param_1 * 10] = param_8;
    fence();
    *puVar2 = (uVar4 + 1 & 0xfffffffe) + 2;
  }
  return;
}


