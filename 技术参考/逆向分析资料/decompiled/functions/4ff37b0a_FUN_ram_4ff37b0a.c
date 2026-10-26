/* Firmware entry: 0x4ff37b0a */

void FUN_ram_4ff37b0a(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined **ppuVar7;
  undefined4 local_b4 [37];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  ppuVar7 = &PTR_s_MEPC_ram_4ff54538_ram_4ff58240;
  puVar6 = local_b4;
  do {
    puVar2 = ppuVar7[1];
    puVar4 = ppuVar7[2];
    puVar5 = ppuVar7[3];
    *puVar6 = *ppuVar7;
    puVar6[1] = puVar2;
    puVar6[2] = puVar4;
    puVar6[3] = puVar5;
    ppuVar7 = ppuVar7 + 4;
    puVar6 = puVar6 + 4;
  } while (ppuVar7 != &PTR_s_MHARTID_ram_4ff546e8_ram_4ff582d0);
  *puVar6 = PTR_s_MHARTID_ram_4ff546e8_ram_4ff582d0;
  FUN_ram_4ff374f4(s_Core_ram_4ff5431c);
  FUN_ram_4ff37582(param_2);
  FUN_ram_4ff374f4(s_register_dump__ram_4ff54324);
  puVar6 = local_b4;
  uVar1 = 0;
  do {
    if ((uVar1 & 3) == 0) {
      FUN_ram_4ff374f4(s_Rebooting____ram_4ff5422c + 0xc);
    }
    uVar3 = *puVar6;
    uVar1 = uVar1 + 1;
    puVar6 = puVar6 + 1;
    FUN_ram_4ff374f4(uVar3);
    FUN_ram_4ff374f4(s_Stack_bounds__0x_ram_4ff542b0 + 0xc);
    uVar3 = *param_1;
    param_1 = param_1 + 1;
    FUN_ram_4ff37524(uVar3);
    FUN_ram_4ff374f4(&DAT_ram_4ff54334);
  } while (uVar1 != 0x25);
  return;
}


