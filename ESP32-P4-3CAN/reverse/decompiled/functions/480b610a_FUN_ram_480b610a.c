/* Firmware entry: 0x480b610a */

char FUN_ram_480b610a(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  byte bVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 auStack_20 [3];
  
  iVar7 = DAT_ram_4ff6dc9c;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset((void *)(DAT_ram_4ff6dc9c + 0x520),0,0x65);
  cVar6 = DAT_ram_4ff6dca8;
  if ((DAT_ram_4ff6dca9 != '\0') && (DAT_ram_4ff6dca8 != '\0')) {
    pbVar10 = (byte *)&DAT_ram_4ff5bd30;
    bVar9 = 0;
    do {
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      bVar9 = bVar9 | bVar1;
    } while (pbVar10 != (byte *)&DAT_ram_4ff5bd40);
    if ((bVar9 != 0) && (DAT_ram_4ff5bd40 != 0)) {
      uVar11 = FUN_ram_480b5fea();
      iVar5 = DAT_ram_4ff5bd40;
      uVar4 = DAT_ram_4ff5bd3c;
      uVar3 = DAT_ram_4ff5bd34;
      uVar2 = DAT_ram_4ff5bd30;
      if ((int)uVar11 != 0) {
        *(undefined4 *)(iVar7 + 0x52c) = DAT_ram_4ff5bd38;
        *(undefined4 *)(iVar7 + 0x530) = uVar4;
        *(undefined4 *)(iVar7 + 0x524) = uVar2;
        *(undefined4 *)(iVar7 + 0x528) = uVar3;
        *(int *)(iVar7 + 0x534) = iVar5;
        *(undefined1 *)(iVar7 + 0x520) = 1;
        local_40 = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        puVar8 = &local_40;
        FUN_ram_4817b062((int)((ulonglong)uVar11 >> 0x20),(int)uVar11,&local_40,0);
        iVar7 = iVar7 + 0x544;
        do {
          FUN_ram_4819ad74(iVar7,3,&DAT_ram_481c3b70,*(undefined1 *)puVar8);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          iVar7 = iVar7 + 2;
        } while (puVar8 != auStack_20);
        return cVar6;
      }
      *(char **)(iVar7 + 0x87bc0) = "settings_read_failed";
    }
  }
  return '\0';
}


