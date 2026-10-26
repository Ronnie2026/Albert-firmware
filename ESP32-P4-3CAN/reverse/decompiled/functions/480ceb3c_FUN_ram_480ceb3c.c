/* Firmware entry: 0x480ceb3c */

void FUN_ram_480ceb3c(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [8];
  
  iVar1 = DAT_ram_4ff6dc94;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(char *)(DAT_ram_4ff6dc94 + 72000) != '\0') &&
     (*(char *)(DAT_ram_4ff6dc94 + 0x11941) == '\0')) {
    iVar5 = FUN_ram_480cea00(&DAT_ram_4ff5be28,DAT_ram_4ff6dc9c + 0x875a8);
    if (iVar5 != 0) {
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      auStack_24[0] = 0;
      puVar4 = (undefined1 *)(DAT_ram_4ff6dc9c + 0x87aa8);
      puVar2 = &uStack_3c;
      do {
        puVar3 = (undefined4 *)((int)puVar2 + 2);
        FUN_ram_4819ad74(puVar2,3,&DAT_ram_481c3b70,*puVar4);
        puVar4 = puVar4 + 1;
        puVar2 = puVar3;
      } while (puVar3 != (undefined4 *)auStack_24);
      iVar6 = FUN_ram_4ff453ae(&uStack_3c,iVar1 + 0x11983);
      iVar5 = DAT_ram_4ff6dc9c;
      uVar8 = *(uint *)(iVar1 + 0x119b8);
      iVar7 = *(int *)(iVar1 + 0x119bc);
      if (iVar6 == 0) {
        if ((*(uint *)(DAT_ram_4ff6dc9c + 0x87ac0) == uVar8) &&
           (*(int *)(DAT_ram_4ff6dc9c + 0x87ac4) == iVar7)) {
          *(undefined1 *)(iVar1 + 72000) = 0;
          FUN_ram_480b66f6();
        }
      }
      else if ((((uVar8 != 0xffffffff) || (iVar7 != -1)) &&
               (*(uint *)(DAT_ram_4ff6dc9c + 0x87ac0) == uVar8 + 1)) &&
              (*(int *)(DAT_ram_4ff6dc9c + 0x87ac4) == (uint)(uVar8 + 1 < uVar8) + iVar7)) {
        *(undefined1 *)(iVar1 + 0x11941) = 1;
        FUN_ram_4ff454c4(iVar1 + 0x1199c,&uStack_3c);
        uVar9 = *(undefined4 *)(iVar5 + 0x87ac4);
        *(undefined4 *)(iVar1 + 0x119c0) = *(undefined4 *)(iVar5 + 0x87ac0);
        *(undefined4 *)(iVar1 + 0x119c4) = uVar9;
        FUN_ram_480b66f6();
      }
    }
    return;
  }
  return;
}


