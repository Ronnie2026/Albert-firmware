/* Firmware entry: 0x4ff22a32 */

char FUN_ram_4ff22a32(int param_1,uint param_2,uint *param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  uint uStack_58;
  uint uStack_54;
  ushort uStack_50;
  undefined1 uStack_4e;
  byte bStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 local_44 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar2 = *(char *)(param_1 + 0x18c67);
  if (cVar2 == '\0') {
    return '\0';
  }
  fence();
  if (*(char *)(param_1 + 0x18c6b) == '\0') {
    return '\0';
  }
  if (*(byte *)(param_1 + 0x2c) == param_2) {
    iVar5 = 0;
  }
  else if (*(byte *)(param_1 + 0x35a4) == param_2) {
    iVar5 = 1;
  }
  else {
    if (*(byte *)(param_1 + 0x6b1c) != param_2) {
      return '\0';
    }
    iVar5 = 2;
  }
  if (param_2 == 1) {
    if (*(int *)(iVar5 * 0x3578 + param_1 + 0x108) == 0) goto LAB_ram_4ff22a98;
  }
  else if (param_2 != 2) goto LAB_ram_4ff22a98;
  iVar7 = param_1 + iVar5 * 0x3578;
  if (*(int *)(iVar7 + 0xa8) != 0) {
    param_1 = param_1 + iVar5 * 0x3578 + 0x88c;
    FUN_ram_4ff3ec14(param_1,0xffffffff);
    if (((((*(char *)(iVar7 + 0x89b) == '\0') && (*(char *)(iVar7 + 0x89a) == '\0')) &&
         (*(char *)(iVar7 + 0x85f) != -1)) &&
        ((iVar5 = FUN_ram_4ff3b9c2(*(undefined4 *)(iVar7 + 0xa8)), iVar5 != 0 &&
         (*(char *)(iVar7 + 0x860) != -1)))) &&
       (iVar5 = FUN_ram_4ff3b4aa(*(undefined4 *)(iVar7 + 0xa8),param_3,0), iVar5 == 1)) {
      *(char *)(iVar7 + 0x860) = *(char *)(iVar7 + 0x860) + '\x01';
      uVar3 = FUN_ram_4ff3b9c2(*(undefined4 *)(iVar7 + 0xa8));
      *(undefined4 *)(iVar7 + 0x2f14) = uVar3;
      *(char *)(iVar7 + 0x85f) = *(char *)(iVar7 + 0x85f) + '\x01';
      uVar4 = FUN_ram_4ff21a0a();
      param_3[5] = uVar4;
      *(undefined1 *)((int)param_3 + 0xf) = 1;
    }
    else {
      cVar2 = '\0';
    }
    FUN_ram_4ff3ee10(param_1);
    return cVar2;
  }
LAB_ram_4ff22a98:
  cVar2 = *(char *)(param_1 + 0x18c67);
  if ((cVar2 != '\0') && (fence(), *(char *)(param_1 + 0x18c6b) != '\0')) {
    if (*(byte *)(param_1 + 0x2c) == param_2) {
      iVar5 = 0;
    }
    else if (*(byte *)(param_1 + 0x35a4) == param_2) {
      iVar5 = 1;
    }
    else {
      if (*(byte *)(param_1 + 0x6b1c) != param_2) {
        return '\0';
      }
      iVar5 = 2;
    }
    iVar8 = param_1 + iVar5 * 0x3578;
    iVar7 = *(int *)(iVar8 + 0x48);
    if (iVar7 != 0) {
      param_1 = param_1 + iVar5 * 0x3578 + 0x88c;
      FUN_ram_4ff3ec14(param_1,0xffffffff);
      cVar1 = *(char *)(iVar8 + 0x89b);
      FUN_ram_4ff3ee10(param_1);
      if (cVar1 == '\0') {
        if (param_4 != 0xffffffff) {
          param_4 = (param_4 * 1000) / 1000;
        }
        iVar5 = FUN_ram_4ff3b4aa(iVar7,&uStack_58,param_4);
        if (iVar5 == 1) {
          puVar6 = local_44;
          do {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          } while (puVar6 != &stack0xffffffe0);
          uStack_2c._0_3_ = CONCAT12(1,(undefined2)uStack_2c);
          uStack_38 = CONCAT31(CONCAT21(CONCAT11(uStack_38._3_1_,bStack_4d >> 7),bStack_4d),
                               uStack_45) & 0xffff7fff;
          uStack_40 = CONCAT13(uStack_4a,CONCAT12(uStack_4b,CONCAT11(uStack_4c,uStack_4e)));
          uStack_3c = CONCAT13(uStack_46,CONCAT12(uStack_47,CONCAT11(uStack_48,uStack_49)));
          *param_3 = (uint)uStack_50;
          param_3[1] = uStack_40;
          param_3[3] = uStack_38;
          param_3[2] = uStack_3c;
          param_3[6] = uStack_2c;
          param_3[4] = uStack_58;
          param_3[5] = uStack_30;
          param_3[7] = uStack_28;
          param_3[8] = uStack_54;
          return cVar2;
        }
        return '\0';
      }
    }
  }
  return '\0';
}


