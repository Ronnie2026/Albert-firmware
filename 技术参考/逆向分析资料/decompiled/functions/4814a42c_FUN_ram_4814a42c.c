/* Firmware entry: 0x4814a42c */

undefined4 FUN_ram_4814a42c(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff6d068 = *(char *)(param_1 + 0xea) + '\x01';
  if ((*(byte *)(param_1 + 0x94) & 0x10) != 0) {
    DAT_ram_4ff6d05c = 0;
    DAT_ram_4ff6d060 = 0;
    DAT_ram_4ff6d058 = 0x2ff;
    DAT_ram_4ff6d064 = 0x2000000;
    puVar7 = (undefined4 *)(param_1 + 0x4c);
    if (puVar7 != &DAT_ram_48237014) {
      uVar4 = *(byte *)(param_1 + 0xe6) + 2;
      iVar6 = (uint)((uVar4 & 7) != 0) + ((int)uVar4 >> 3);
      iVar2 = FUN_ram_4813ad9a(0x36,iVar6 * 8 + 8,0x280);
      if (iVar2 == 0) {
        return 0xfffffffe;
      }
      puVar5 = *(undefined1 **)(iVar2 + 4);
      puVar5[8] = 1;
      puVar5[9] = (char)iVar6;
      *puVar5 = 0x85;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      FUN_ram_4ff45158(puVar5 + 10,param_1 + 0xe0,*(undefined1 *)(param_1 + 0xe6));
      uVar1 = FUN_ram_481519fc(iVar2,0x3a,*(undefined2 *)(iVar2 + 10),puVar7,&DAT_ram_4ff6d058);
      puVar5[2] = (char)uVar1;
      puVar5[3] = (char)((ushort)uVar1 >> 8);
      goto LAB_ram_4814a596;
    }
  }
  DAT_ram_4ff6d064 = 0x2000000;
  DAT_ram_4ff6d060 = 0;
  DAT_ram_4ff6d05c = 0;
  DAT_ram_4ff6d058 = 0x2ff;
  iVar2 = FUN_ram_4813ad9a(0x36,8,0x280);
  if (iVar2 == 0) {
    return 0xfffffffe;
  }
  puVar5 = *(undefined1 **)(iVar2 + 4);
  *puVar5 = 0x85;
  puVar5[1] = 0;
  uVar1 = *(undefined2 *)(iVar2 + 10);
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  uVar1 = FUN_ram_481519fc(iVar2,0x3a,uVar1,&DAT_ram_48237014,&DAT_ram_4ff6d058);
  puVar5[2] = (char)uVar1;
  puVar5[3] = (char)((ushort)uVar1 >> 8);
  puVar7 = (undefined4 *)0x0;
LAB_ram_4814a596:
  uVar3 = FUN_ram_48149080(iVar2,puVar7,&DAT_ram_4ff6d058,0xff,0,0x3a,param_1);
  FUN_ram_4813ac74(iVar2);
  return uVar3;
}


