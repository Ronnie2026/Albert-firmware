/* Firmware entry: 0x48085db8 */

undefined8 FUN_ram_48085db8(int param_1,uint param_2,int param_3,char *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_184;
  undefined1 auStack_17c [8];
  undefined1 auStack_174 [28];
  undefined4 local_158 [51];
  undefined4 auStack_8c [30];
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 < 8) && ((byte)(*param_4 - 1U) < 4)) {
    if ((*(char *)(param_1 + 0x18) != '\0') && (*(char *)(param_1 + 0x19) != '\0')) {
      puVar1 = memset(auStack_17c,0,0x16c);
      puVar5 = puVar1;
      do {
        *(undefined1 *)(puVar5 + 0x1e) = 1;
        *(undefined2 *)(puVar5 + 0x29) = 100;
        *(undefined1 *)((int)puVar5 + 0xad) = 1;
        *(undefined1 *)(puVar5 + 0x2c) = 0xff;
        *(undefined2 *)((int)puVar5 + 0xb6) = 0xff1d;
        *(undefined1 *)(puVar5 + 0x31) = 0xff;
        puVar5 = puVar5 + 0x14;
      } while (puVar5 != auStack_8c);
      if (param_3 != 0) {
        iVar7 = 0;
        do {
          if (*(char *)(param_3 + iVar7) == '\0') break;
          *(char *)((int)puVar1 + iVar7 + 8) = *(char *)(param_3 + iVar7);
          iVar7 = iVar7 + 1;
        } while (iVar7 != 0x18);
        auStack_174[iVar7] = 0;
      }
      pcVar8 = param_4 + 0x140;
      puVar5 = local_158;
      do {
        uVar10 = *(undefined4 *)(param_4 + 4);
        uVar2 = *(undefined4 *)(param_4 + 8);
        uVar3 = *(undefined4 *)(param_4 + 0xc);
        *puVar5 = *(undefined4 *)param_4;
        puVar5[1] = uVar10;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
        param_4 = param_4 + 0x10;
        puVar5 = puVar5 + 4;
      } while (param_4 != pcVar8);
      *puVar5 = *(undefined4 *)param_4;
      puVar5 = puVar1;
      do {
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      } while (puVar1 + 0x5a != puVar5);
      puVar6 = (undefined2 *)(*(int *)(param_1 + 0x14) + param_2 * 0x17c);
      *puVar6 = &sedeleg;
      puVar5 = (undefined4 *)(puVar6 + 2);
      do {
        uVar2 = puVar1[1];
        uVar11 = puVar1[2];
        uVar3 = puVar1[3];
        uVar10 = puVar1[4];
        *puVar5 = *puVar1;
        puVar5[1] = uVar2;
        puVar5[2] = uVar11;
        puVar5[3] = uVar3;
        puVar5[4] = uVar10;
        puVar1 = puVar1 + 5;
        puVar5 = puVar5 + 5;
      } while (puVar1 != &uStack_14);
      *puVar5 = *puVar1;
      iVar9 = *(int *)(param_1 + 0x14) + param_2 * 0x17c;
      iVar7 = *(int *)(iVar9 + 0x170) + 1;
      if (iVar7 == 0) {
        iVar7 = 1;
      }
      *(int *)(iVar9 + 0x170) = iVar7;
      uVar4 = *(uint *)(param_1 + 0x1c);
      *(undefined1 *)(iVar9 + 0x178) = 1;
      *(uint *)(param_1 + 0x1c) = uVar4 | 1 << (param_2 & 0x1f);
      uVar2 = *(undefined4 *)(puVar6 + 0xb8);
      uStack_184 = CONCAT13(uStack_184._3_1_,0x10001);
      goto LAB_ram_48085f96;
    }
    uStack_184 = (uint)uStack_184._3_1_ << 0x18;
    uStack_184 = CONCAT22(uStack_184._2_2_,0x1300);
  }
  else {
    uStack_184 = (uint)uStack_184._3_1_ << 0x18;
    uStack_184 = CONCAT22(uStack_184._2_2_,0x1200);
  }
  uVar2 = 0;
LAB_ram_48085f96:
  return CONCAT44(uVar2,uStack_184);
}


