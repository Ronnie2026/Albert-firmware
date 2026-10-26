/* Firmware entry: 0x480cf35c */

int FUN_ram_480cf35c(void)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar3 = DAT_ram_4ff6dc9c;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar2 = &local_40;
  memset((void *)(DAT_ram_4ff6dc9c + 0x668),0,0x78);
  if (DAT_ram_4ff6dcd5 != '\0') {
    iVar4 = FUN_ram_480cea00(&DAT_ram_4ff5be28,iVar3 + 0x875a8);
    if (iVar4 != 0) {
      pbVar7 = (byte *)(iVar3 + 0x87aa8);
      bVar5 = 0;
      pbVar6 = pbVar7;
      do {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar5 = bVar5 | bVar1;
      } while (pbVar6 != (byte *)(iVar3 + 0x87ab4));
      if ((bVar5 != 0) && (*(int *)(iVar3 + 0x875a8) != 0)) {
        iVar4 = FUN_ram_480713be(iVar3 + 0x875a8,0,iVar3 + 0x85b18);
        if (iVar4 != 0) {
          *(undefined4 *)(iVar3 + 0x6d8) = *(undefined4 *)(iVar3 + 0x875a8);
          *(undefined4 *)(iVar3 + 0x6c8) = *(undefined4 *)(iVar3 + 0x87ac0);
          *(undefined4 *)(iVar3 + 0x6cc) = *(undefined4 *)(iVar3 + 0x87ac4);
          *(undefined1 *)(iVar3 + 0x668) = 1;
          iVar8 = iVar3 + 0x669;
          do {
            bVar5 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            FUN_ram_4819ad74(iVar8,3,&DAT_ram_481c3b70,bVar5);
            iVar8 = iVar8 + 2;
          } while (pbVar7 != (byte *)(iVar3 + 0x87ab4));
          local_40 = 0;
          uStack_3c = 0;
          uStack_38 = 0;
          uStack_34 = 0;
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_28 = 0;
          uStack_24 = 0;
          FUN_ram_4817b062(iVar3 + 0x85b18,0x4b3,&local_40,0);
          iVar3 = iVar3 + 0x682;
          do {
            FUN_ram_4819ad74(iVar3,3,&DAT_ram_481c3b70,*(undefined1 *)puVar2);
            puVar2 = (undefined4 *)((int)puVar2 + 1);
            iVar3 = iVar3 + 2;
          } while (puVar2 != (undefined4 *)&stack0xffffffe0);
          return iVar4;
        }
      }
    }
  }
  return 0;
}


