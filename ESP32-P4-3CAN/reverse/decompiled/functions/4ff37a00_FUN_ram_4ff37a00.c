/* Firmware entry: 0x4ff37a00 */

void FUN_ram_4ff37a00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_28;
  undefined4 auStack_24 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff36eb2();
  if (iVar1 == -1) {
    FUN_ram_4ff374f4(s_ASSIST_DEBUG_is_not_triggered_BU_ram_4ff54244);
    iVar1 = 0;
  }
  FUN_ram_4ff3e7ea(iVar1);
  uVar2 = FUN_ram_4ff3c612();
  FUN_ram_4ff36e7c(iVar1,&uStack_28,auStack_24);
  FUN_ram_4ff374f4(s_Rebooting____ram_4ff5422c + 0xc);
  FUN_ram_4ff374f4(s_Detected_in_task___ram_4ff54280);
  FUN_ram_4ff374f4(uVar2);
  FUN_ram_4ff374f4(s___at_0x_ram_4ff54294);
  FUN_ram_4ff36ede(iVar1);
  FUN_ram_4ff37524();
  FUN_ram_4ff374f4(s_Rebooting____ram_4ff5422c + 0xc);
  FUN_ram_4ff374f4(s_Stack_pointer__0x_ram_4ff5429c);
  FUN_ram_4ff37524(*(undefined4 *)(param_1 + 8));
  FUN_ram_4ff374f4(s_Rebooting____ram_4ff5422c + 0xc);
  FUN_ram_4ff374f4(s_Stack_bounds__0x_ram_4ff542b0);
  FUN_ram_4ff37524(uStack_28);
  FUN_ram_4ff374f4(s___0x_ram_4ff542c4);
  FUN_ram_4ff37524(auStack_24[0]);
  FUN_ram_4ff374f4(&DAT_ram_4ff542cc);
  return;
}


