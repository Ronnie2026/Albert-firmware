/* Firmware entry: 0x4ff2cc60 */

undefined4 FUN_ram_4ff2cc60(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_a4 [152];
  
  uVar1 = mhartid;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uVar2 = FUN_ram_4ff3e7ea(mhartid);
  iVar3 = FUN_ram_4ff3ea14(uVar2,&local_b0);
  uVar2 = uStack_ac;
  uVar4 = 0x105;
  if (iVar3 == 1) {
    memset(auStack_a4,0,0x94);
    FUN_ram_4ff45158(auStack_a4,uVar2,0x94);
    FUN_ram_4ff37dc6(auStack_a4);
    FUN_ram_4ff37b0a(auStack_a4,uVar1);
    ets_printf("\r\n");
    ets_printf(
              "Please enable CONFIG_ESP_SYSTEM_USE_FRAME_POINTER option to have a full backtrace.\r\n"
              );
    uVar4 = 0;
  }
  return uVar4;
}


