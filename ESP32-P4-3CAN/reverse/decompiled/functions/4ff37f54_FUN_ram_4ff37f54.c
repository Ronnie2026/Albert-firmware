/* Firmware entry: 0x4ff37f54 */

void FUN_ram_4ff37f54(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar2 = DAT_ram_4ff6d970;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = DAT_ram_4ff6d970 != param_1;
  FUN_ram_4ff37b0a(param_1,bVar1);
  FUN_ram_4ff374f4(s_Rebooting____ram_4ff5422c + 0xc);
  FUN_ram_4ff37d3a(param_1,bVar1);
  FUN_ram_4ff374f4(s_Rebooting____ram_4ff5422c + 0xc);
  puVar6 = &DAT_ram_4ff6d970;
  iVar3 = 0;
  iVar4 = iVar3;
  if (iVar2 == param_1) goto LAB_ram_4ff37fca;
  iVar5 = DAT_ram_4ff6d970;
  if (DAT_ram_4ff6d970 == 0) goto LAB_ram_4ff37fca;
  do {
    FUN_ram_4ff37b0a(iVar5,iVar3);
    FUN_ram_4ff374f4(s_Rebooting____ram_4ff5422c + 0xc);
    FUN_ram_4ff37d3a(iVar5,iVar3);
    FUN_ram_4ff374f4(s_Rebooting____ram_4ff5422c + 0xc);
    iVar4 = iVar3;
LAB_ram_4ff37fca:
    iVar3 = 1;
    if (iVar4 == 1) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if (iVar2 != param_1) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    iVar5 = puVar6[1];
    puVar6 = puVar6 + 1;
  } while (iVar5 != 0);
  return;
}


