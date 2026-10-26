/* Firmware entry: 0x48047848 */

void FUN_ram_48047848(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 local_68 [15];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined1 *)(param_1 + 0x78);
  FUN_ram_4ff3ec14(param_1 + 0xb48,0xffffffff);
  do {
    while( true ) {
      if (1 < (byte)(puVar1[0x78] - 1)) break;
      puVar8 = *(undefined4 **)(param_1 + 0xb50);
      *(ushort *)(param_1 + 0xb60) =
           ~(ushort)(1 << ((byte)puVar1[2] & 0x1f)) & *(ushort *)(param_1 + 0xb60);
      puVar6 = puVar8 + 0x297;
      puVar1[0x1e] = 0;
      puVar1[0x78] = 4;
      FUN_ram_4ff3ec14(puVar6,0xffffffff);
      piVar7 = (int *)*puVar8;
      FUN_ram_4ff3ee10(puVar6);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xa8))(piVar7,puVar1);
      }
      puVar8 = &DAT_ram_48222eb8;
      puVar6 = local_68;
      do {
        puVar5 = puVar6;
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        *puVar5 = *puVar8;
        puVar5[1] = uVar2;
        puVar5[2] = uVar3;
        puVar5[3] = uVar4;
        puVar8 = puVar8 + 4;
        puVar6 = puVar5 + 4;
      } while (puVar8 != &DAT_ram_48222ee8);
      puVar5[4] = DAT_ram_48222ee8;
      puVar5[5] = DAT_ram_48222eec;
      FUN_ram_4ff45158(puVar1 + 0x38,local_68,0x35);
      *(undefined4 *)(puVar1 + 0x3c) = *(undefined4 *)(puVar1 + 4);
      uVar2 = *(undefined4 *)(puVar1 + 0x10);
      *(undefined4 *)(puVar1 + 0x50) = *(undefined4 *)(puVar1 + 0x28);
      uVar3 = *(undefined4 *)(puVar1 + 8);
      *(undefined4 *)(puVar1 + 0x58) = *(undefined4 *)(puVar1 + 0x30);
      *(undefined4 *)(puVar1 + 0x5c) = *(undefined4 *)(puVar1 + 0x34);
      *(undefined4 *)(puVar1 + 0x54) = *(undefined4 *)(puVar1 + 0x2c);
      puVar1[0x45] = *puVar1;
      *(undefined4 *)(puVar1 + 0x48) = *(undefined4 *)(puVar1 + 0x14);
      puVar1[0x44] = 0xc;
      puVar1[0x38] = 2;
      puVar1[0x61] = (char)((uint)uVar2 >> 8);
      puVar1[0x68] = (char)((byte)puVar1[2] + 1);
      puVar1[100] = (char)uVar3;
      puVar1[0x69] = (char)((byte)puVar1[2] + 1 >> 8);
      puVar1[0x60] = (char)uVar2;
      puVar1[0x62] = (char)((uint)uVar2 >> 0x10);
      puVar1[99] = (char)((uint)uVar2 >> 0x18);
      puVar1[0x65] = (char)((uint)uVar3 >> 8);
      puVar1[0x66] = (char)((uint)uVar3 >> 0x10);
      puVar1[0x67] = (char)((uint)uVar3 >> 0x18);
      puVar1[0x6a] = 0x11;
      puVar1 = puVar1 + 0xf0;
      if (puVar1 == (undefined1 *)(param_1 + 3000)) goto LAB_ram_480479d6;
    }
    if (puVar1[0x78] == '\x03') {
      puVar8 = *(undefined4 **)(param_1 + 0xb50);
      puVar6 = puVar8 + 0x297;
      puVar1[0x79] = 1;
      puVar1[0x1e] = 0;
      FUN_ram_4ff3ec14(puVar6,0xffffffff);
      piVar7 = (int *)*puVar8;
      FUN_ram_4ff3ee10(puVar6);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xa8))(piVar7,puVar1);
      }
    }
    puVar1 = puVar1 + 0xf0;
  } while (puVar1 != (undefined1 *)(param_1 + 3000));
LAB_ram_480479d6:
  FUN_ram_4ff3ee10(param_1 + 0xb48);
  return;
}


