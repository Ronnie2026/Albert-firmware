/* Firmware entry: 0x4814a806 */

void FUN_ram_4814a806(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  char cStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined4 *)(&DAT_ram_4ff6d31c)[param_1 * 0xb];
  while (puVar1 != (undefined4 *)0x0) {
    iVar2 = puVar1[1];
    iVar4 = *(int *)(iVar2 + 4);
    (&DAT_ram_4ff6d31c)[param_1 * 0xb] = *puVar1;
    uStack_34 = *(uint *)(iVar4 + 0x18);
    uStack_30 = *(undefined4 *)(iVar4 + 0x1c);
    uStack_2c = *(undefined4 *)(iVar4 + 0x20);
    uStack_28 = *(undefined4 *)(iVar4 + 0x24);
    iVar4 = (&DAT_ram_4ff6d310)[param_1 * 0xb];
    uVar3 = (uStack_34 & 0x8fff) - 0x1ff & 0xfffffeff;
    if (((uStack_34 & 0xc0ff) == 0x80fe) || (cStack_24 = '\0', uVar3 == 0)) {
      cStack_24 = *(char *)(iVar4 + 0xea) + '\x01';
    }
    (**(code **)(iVar4 + 0xbc))
              (iVar4,iVar2,&uStack_34,uVar3,uStack_34 & 0xc0ff,*(code **)(iVar4 + 0xbc));
    FUN_ram_4813ac74(puVar1[1]);
    FUN_ram_48139604(0xe,puVar1);
    DAT_ram_4ff6e234 = DAT_ram_4ff6e234 + -1;
    puVar1 = (undefined4 *)(&DAT_ram_4ff6d31c)[param_1 * 0xb];
  }
  return;
}


