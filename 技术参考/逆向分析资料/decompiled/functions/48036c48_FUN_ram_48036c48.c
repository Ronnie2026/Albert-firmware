/* Firmware entry: 0x48036c48 */

char FUN_ram_48036c48(int param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  char *pcVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  uint uStack_78;
  uint uStack_74;
  ushort uStack_70;
  undefined1 uStack_6e;
  byte bStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 local_64 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined1 auStack_40 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x18c67) != '\0') {
    pcVar8 = (char *)(param_1 + 0x18c6b);
    fence();
    if (*pcVar8 != '\0') {
      cVar4 = '\x05';
      do {
        uVar6 = *(byte *)(param_1 + 0x17ec4) + 1;
        bVar1 = (&DAT_ram_481f54c8)[*(byte *)(param_1 + 0x17ec4)];
        *(byte *)(param_1 + 0x17ec4) =
             (char)uVar6 -
             (((byte)((ulonglong)uVar6 * 0xcccccccd >> 0x20) & 0xfc) + (char)(uVar6 / 5));
        cVar2 = *(char *)(param_1 + 0x18c67);
        if (cVar2 != '\0') {
          cVar3 = *(char *)((uint)bVar1 * 0x3578 + param_1 + 0x2c);
          fence();
          if (*pcVar8 != '\0') {
            if (*(char *)(param_1 + 0x2c) == cVar3) {
              iVar5 = 0;
            }
            else if (*(char *)(param_1 + 0x35a4) == cVar3) {
              iVar5 = 1;
            }
            else {
              if (*(char *)(param_1 + 0x6b1c) != cVar3) goto LAB_ram_48036d0c;
              iVar5 = 2;
            }
            iVar9 = param_1 + iVar5 * 0x3578;
            iVar11 = *(int *)(iVar9 + 0x48);
            if (iVar11 != 0) {
              iVar5 = param_1 + iVar5 * 0x3578 + 0x88c;
              FUN_ram_4ff3ec14(iVar5,0xffffffff);
              cVar3 = *(char *)(iVar9 + 0x89b);
              FUN_ram_4ff3ee10(iVar5);
              if ((cVar3 == '\0') && (iVar5 = FUN_ram_4ff3b4aa(iVar11,&uStack_78,0), iVar5 == 1)) {
                puVar7 = local_64;
                do {
                  *puVar7 = 0;
                  puVar7 = puVar7 + 1;
                } while (auStack_40 != puVar7);
                uStack_5c._0_2_ = CONCAT11(uStack_68,uStack_69);
                uStack_5c._0_3_ = CONCAT12(uStack_67,(undefined2)uStack_5c);
                uStack_60._0_2_ = CONCAT11(uStack_6c,uStack_6e);
                uStack_4c._0_3_ = CONCAT12(1,(undefined2)uStack_4c);
                uStack_58 = CONCAT31(CONCAT21(CONCAT11(uStack_58._3_1_,bStack_6d >> 7),bStack_6d),
                                     uStack_65) & 0xffff7fff;
                uStack_60._0_3_ = CONCAT12(uStack_6b,(undefined2)uStack_60);
                uStack_60 = CONCAT13(uStack_6a,(undefined3)uStack_60);
                uStack_5c = CONCAT13(uStack_66,(undefined3)uStack_5c);
                *param_2 = (uint)uStack_70;
                param_2[1] = uStack_60;
                param_2[3] = uStack_58;
                param_2[2] = uStack_5c;
                param_2[6] = uStack_4c;
                param_2[4] = uStack_78;
                param_2[5] = uStack_50;
                param_2[7] = uStack_48;
                param_2[8] = uStack_74;
                return cVar2;
              }
            }
          }
        }
LAB_ram_48036d0c:
        cVar4 = cVar4 + -1;
      } while (cVar4 != '\0');
      pbVar10 = &DAT_ram_481f54c4;
      do {
        bVar1 = *pbVar10;
        iVar11 = (uint)bVar1 * 0x3578 + 0x88c + param_1;
        FUN_ram_4ff3ec14(iVar11,0xffffffff);
        iVar5 = (uint)bVar1 * 0x3578 + param_1;
        if ((((*(int *)(iVar5 + 0x44) != 0) && (*(char *)(iVar5 + 0x895) != '\0')) &&
            (*(char *)(iVar5 + 0x896) == '\0')) &&
           ((*(char *)(iVar5 + 0x89a) == '\0' && (*(char *)(iVar5 + 0x89b) == '\0')))) {
          FUN_ram_4ff3ee10(iVar11);
          cVar4 = *(char *)(param_1 + 0x18c67);
          if (cVar4 == '\0') {
            return '\0';
          }
          cVar2 = *(char *)(iVar5 + 0x2c);
          fence();
          if (*pcVar8 == '\0') {
            return '\0';
          }
          if (*(char *)(param_1 + 0x2c) == cVar2) {
            iVar5 = 0;
          }
          else if (*(char *)(param_1 + 0x35a4) == cVar2) {
            iVar5 = 1;
          }
          else {
            if (*(char *)(param_1 + 0x6b1c) != cVar2) {
              return '\0';
            }
            iVar5 = 2;
          }
          iVar11 = param_1 + iVar5 * 0x3578;
          iVar9 = *(int *)(iVar11 + 0x48);
          if (iVar9 == 0) {
            return '\0';
          }
          param_1 = param_1 + iVar5 * 0x3578 + 0x88c;
          FUN_ram_4ff3ec14(param_1,0xffffffff);
          cVar2 = *(char *)(iVar11 + 0x89b);
          FUN_ram_4ff3ee10(param_1);
          if (cVar2 != '\0') {
            return '\0';
          }
          iVar5 = FUN_ram_4ff3b4aa(iVar9,&uStack_78,1);
          if (iVar5 == 1) {
            puVar7 = local_64;
            do {
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            } while (puVar7 != auStack_40);
            uStack_5c._0_2_ = CONCAT11(uStack_68,uStack_69);
            uStack_5c._0_3_ = CONCAT12(uStack_67,(undefined2)uStack_5c);
            uStack_60._0_2_ = CONCAT11(uStack_6c,uStack_6e);
            uStack_4c._0_3_ = CONCAT12(1,(undefined2)uStack_4c);
            uStack_58 = CONCAT31(CONCAT21(CONCAT11(uStack_58._3_1_,bStack_6d >> 7),bStack_6d),
                                 uStack_65) & 0xffff7fff;
            uStack_60._0_3_ = CONCAT12(uStack_6b,(undefined2)uStack_60);
            uStack_60 = CONCAT13(uStack_6a,(undefined3)uStack_60);
            uStack_5c = CONCAT13(uStack_66,(undefined3)uStack_5c);
            *param_2 = (uint)uStack_70;
            param_2[1] = uStack_60;
            param_2[3] = uStack_58;
            param_2[2] = uStack_5c;
            param_2[6] = uStack_4c;
            param_2[4] = uStack_78;
            param_2[5] = uStack_50;
            param_2[7] = uStack_48;
            param_2[8] = uStack_74;
            return cVar4;
          }
          return '\0';
        }
        pbVar10 = pbVar10 + 1;
        FUN_ram_4ff3ee10();
      } while (pbVar10 != &UNK_ram_481f54c7);
      FUN_ram_4ff3c2b6(1);
    }
  }
  return '\0';
}


