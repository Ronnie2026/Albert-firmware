/* Firmware entry: 0x48180ad6 */

int FUN_ram_48180ad6(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iStack_84;
  undefined4 uStack_74;
  int *piStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int iStack_60;
  uint uStack_5c;
  void *pvStack_58;
  undefined4 uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_68 = 0;
  iStack_60 = 0;
  pvStack_58 = (void *)0x0;
  iStack_50 = 0;
  piStack_70 = (int *)0x0;
  uStack_44 = 0x10001;
  uStack_64 = 1;
  uStack_5c = 1;
  uStack_54._0_2_ = 1;
  uStack_54._2_2_ = 0;
  uStack_4c = 1;
  uStack_74 = 1;
  uStack_6c = 1;
  puStack_48 = &uStack_74;
  iVar5 = FUN_ram_481804de(&piStack_70,param_1,&puStack_48,0xffffffff);
  piVar1 = piStack_70;
  uVar2 = uStack_6c._2_2_;
  uVar9 = (uint)uStack_6c._2_2_;
  if (iVar5 == 0) {
    if (uVar9 == 0) {
      uVar10 = 0;
    }
    else {
      uVar3 = 0;
      piVar7 = piStack_70;
      do {
        iVar5 = *piVar7;
        piVar7 = piVar7 + 1;
        if (iVar5 != 0) {
          iVar5 = __ctzsi2(iVar5);
          uVar10 = uVar3 * 0x20 + iVar5;
          break;
        }
        uVar3 = uVar3 + 1;
        uVar10 = 0;
      } while (uVar3 != uVar9);
    }
    iVar5 = FUN_ram_4817fe72(&iStack_68,&piStack_70);
    if (iVar5 == 0) {
      if (uStack_64._2_2_ != 0) {
        FUN_ram_48181940(iStack_68,uStack_64._2_2_,uVar10);
      }
      iStack_84 = 0;
      if (param_2 != 0) {
        do {
          iVar4 = 0x20;
          do {
            do {
              uVar3 = (uint)*(ushort *)(param_1 + 6);
              if (uVar3 == 0) {
                if (pvStack_58 != (void *)0x0) {
                  FUN_ram_48178b14(pvStack_58,(uint)uStack_54._2_2_ << 2);
                }
                pvStack_58 = (void *)0x0;
                uStack_54._0_2_ = 1;
                uStack_54._2_2_ = 0;
              }
              else {
                if (uVar3 == uStack_54._2_2_) {
                  memset(pvStack_58,0,uVar3 << 2);
                  uStack_54._0_2_ = 1;
                }
                else {
                  if (pvStack_58 != (void *)0x0) {
                    FUN_ram_48178b14(pvStack_58,(uint)uStack_54._2_2_ << 2);
                  }
                  pvStack_58 = (void *)0x0;
                  uStack_54._0_2_ = 1;
                  uStack_54._2_2_ = 0;
                  iVar5 = FUN_ram_4817fbba(&pvStack_58,uVar3);
                  if (iVar5 != 0) goto LAB_ram_48180dbe;
                }
                iVar5 = FUN_ram_48181ee2(pvStack_58,uStack_54._2_2_,uVar3 << 2,param_3,param_4);
                if (iVar5 != 0) goto LAB_ram_48180b2c;
              }
              uVar3 = FUN_ram_48181584(pvStack_58,uStack_54._2_2_);
              uVar6 = FUN_ram_48181584(piVar1,uVar9);
              if (uVar6 < uVar3) {
                puVar8 = (uint *)((uStack_54._2_2_ + 0x3fffffff) * 4 + (int)pvStack_58);
                *puVar8 = *puVar8 & ~(-1 << (uVar6 - 1 & 0x1f));
              }
              iVar4 = iVar4 + -1;
              if (iVar4 == 0) goto LAB_ram_48180d9a;
              uStack_6c = CONCAT22(uVar2,(undefined2)uStack_6c);
              piStack_70 = piVar1;
              iVar5 = FUN_ram_4818023e(&pvStack_58,&piStack_70);
            } while (-1 < iVar5);
            uStack_74 = 1;
            uStack_44 = 0x10001;
            puStack_48 = &uStack_74;
            iVar5 = FUN_ram_4818023e(&pvStack_58,&puStack_48);
          } while (iVar5 < 1);
          iVar5 = FUN_ram_4817bc22(&pvStack_58,&pvStack_58,&iStack_68,param_1,&iStack_50);
          if (iVar5 != 0) goto LAB_ram_48180b2c;
          iVar5 = FUN_ram_4818023e(&pvStack_58,&piStack_70);
          if (iVar5 != 0) {
            uStack_74 = 1;
            uStack_44 = 0x10001;
            puStack_48 = &uStack_74;
            iVar5 = FUN_ram_4818023e(&pvStack_58,&puStack_48);
            if (iVar5 != 0) {
              uVar3 = 1;
              if (1 < uVar10) {
                while( true ) {
                  uStack_6c = CONCAT22(uVar2,(undefined2)uStack_6c);
                  piStack_70 = piVar1;
                  iVar5 = FUN_ram_4818023e(&pvStack_58,&piStack_70);
                  if (iVar5 == 0) break;
                  iVar5 = FUN_ram_4817bf84(&iStack_60,&pvStack_58);
                  if (iVar5 != 0) goto LAB_ram_48180b2c;
                  iVar5 = FUN_ram_48180a3c(&pvStack_58,&iStack_60,param_1);
                  if (iVar5 != 0) goto LAB_ram_48180b2c;
                  uStack_74 = 1;
                  uStack_44 = 0x10001;
                  puStack_48 = &uStack_74;
                  iVar5 = FUN_ram_4818023e(&pvStack_58,&puStack_48);
                  uVar3 = uVar3 + 1;
                  if ((iVar5 == 0) || (uVar3 == uVar10)) break;
                }
              }
              uStack_6c = CONCAT22(uVar2,(undefined2)uStack_6c);
              piStack_70 = piVar1;
              iVar5 = FUN_ram_4818023e(&pvStack_58,&piStack_70);
              if (iVar5 == 0) {
                uStack_44 = 0x10001;
                uStack_74 = 1;
                puStack_48 = &uStack_74;
                iVar5 = FUN_ram_4818023e(&pvStack_58,&puStack_48);
                if (iVar5 != 0) goto LAB_ram_48180cdc;
              }
LAB_ram_48180d9a:
              iVar5 = -0xe;
              goto LAB_ram_48180b2c;
            }
          }
LAB_ram_48180cdc:
          iStack_84 = iStack_84 + 1;
        } while (param_2 != iStack_84);
      }
      iVar5 = 0;
    }
    else {
LAB_ram_48180dbe:
      iVar5 = -0x10;
    }
  }
LAB_ram_48180b2c:
  if (piVar1 != (int *)0x0) {
    FUN_ram_48178b14(piVar1,uVar9 << 2);
  }
  if (iStack_68 != 0) {
    FUN_ram_48178b14(iStack_68,(uStack_64 >> 0x10) << 2);
  }
  iStack_68 = 0;
  uStack_64 = 1;
  if (iStack_60 != 0) {
    FUN_ram_48178b14(iStack_60,(uStack_5c >> 0x10) << 2);
  }
  iStack_60 = 0;
  uStack_5c = 1;
  if (pvStack_58 != (void *)0x0) {
    FUN_ram_48178b14(pvStack_58,(uint)uStack_54._2_2_ << 2);
  }
  pvStack_58 = (void *)0x0;
  uStack_54 = 1;
  if (iStack_50 != 0) {
    FUN_ram_48178b14(iStack_50,(uStack_4c >> 0x10) << 2);
  }
  return iVar5;
}


