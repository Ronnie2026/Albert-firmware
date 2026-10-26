/* Firmware entry: 0x4ff37d3a */

void FUN_ram_4ff37d3a(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff374f4(s_Stack_memory__ram_4ff543c8);
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar3 = puVar1 + 0x100;
  do {
    FUN_ram_4ff37524(puVar1);
    FUN_ram_4ff374f4(&DAT_ram_4ff543dc);
    puVar4 = puVar1 + 8;
    while( true ) {
      FUN_ram_4ff374f4(&DAT_ram_4ff543e0);
      uVar2 = *puVar1;
      puVar1 = puVar1 + 1;
      FUN_ram_4ff37524(uVar2);
      if (puVar1 == puVar4) break;
      FUN_ram_4ff374f4(s_Core_ram_4ff5431c + 4);
    }
    FUN_ram_4ff374f4(s_Rebooting____ram_4ff5422c + 0xc);
  } while (puVar3 != puVar1);
  return;
}


