/* Firmware entry: 0x48130036 */

void FUN_ram_48130036(void)

{
  bool bVar1;
  char cVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_34 = 0;
  uStack_38 = 0x58637069;
  puVar9 = &DAT_ram_4ff532ac;
  puVar8 = &DAT_ram_4ff6e0fc;
  puVar7 = &DAT_ram_4ff531f4;
  puVar6 = &DAT_ram_4ff6e0f4;
  puVar3 = &DAT_ram_4ff6e104;
  cVar2 = '\0';
  do {
    uStack_38 = CONCAT13(cVar2 + '0',(undefined3)uStack_38);
    uVar4 = FUN_ram_4ff3b204(1,puVar9);
    *puVar8 = uVar4;
    uVar4 = FUN_ram_4ff3aca6(1,0,0,puVar7,3);
    *puVar6 = uVar4;
    iVar5 = FUN_ram_4ff3e458(FUN_ram_4ff2ca12,&uStack_38,0x400,cVar2,0x18,puVar3,cVar2);
    if (iVar5 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("esp_ipc.c",0x74,"esp_ipc_init","res == pdTRUE");
    }
    puVar9 = puVar9 + 0x5c;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 0x5c;
    puVar6 = puVar6 + 1;
    puVar3 = puVar3 + 4;
    bVar1 = cVar2 != '\x01';
    cVar2 = '\x01';
  } while (bVar1);
  return;
}


