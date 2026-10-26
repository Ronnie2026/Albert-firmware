/* Firmware entry: 0x481805fa */

int FUN_ram_481805fa(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  undefined8 uVar15;
  int iStack_90;
  uint uStack_8c;
  undefined4 uStack_80;
  int iStack_7c;
  undefined2 uStack_78;
  ushort uStack_76;
  int iStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined2 uStack_68;
  ushort uStack_66;
  undefined4 *puStack_64;
  uint uStack_60;
  undefined4 ***pppuStack_5c;
  undefined4 uStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  undefined4 **ppuStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puStack_54 = (undefined4 *)0x0;
  uStack_48 = 0x10001;
  ppuStack_4c = &puStack_54;
  iVar1 = FUN_ram_4818023e(param_4,&ppuStack_4c);
  if (iVar1 == 0) {
    return -0xc;
  }
  pppuStack_5c = &ppuStack_4c;
  uStack_58 = 0x30001;
  iStack_74 = 0;
  puStack_64 = (undefined4 *)0x0;
  uStack_78 = 1;
  uStack_70._0_2_ = 1;
  uStack_70._2_2_ = 0;
  uStack_68 = 1;
  uStack_60 = 1;
  iVar1 = FUN_ram_481801be(param_3,param_4);
  if (iVar1 != -1) {
    iStack_7c = 0;
    uStack_76 = 0;
    iVar11 = FUN_ram_4817fe72(&iStack_7c,param_3);
    iVar1 = iStack_7c;
    uVar12 = (uint)uStack_76;
    if ((iVar11 == 0) && (iVar11 = FUN_ram_4817fe72(&iStack_74,param_4), iVar11 == 0)) {
      uStack_70._0_2_ = 1;
      uStack_78 = 1;
      iStack_6c = 0;
      uStack_66 = 0;
      iVar11 = FUN_ram_4817fbba(&iStack_6c,*(ushort *)(param_3 + 6) + 2);
      if (iVar11 == 0) {
        iVar9 = FUN_ram_4817ff24(&iStack_6c,0);
        iVar11 = iStack_6c;
        uVar13 = (uint)uStack_66;
        if ((iVar9 != 0) ||
           (iVar9 = FUN_ram_4817fbba(&puStack_64,*(ushort *)(param_3 + 6) + 2), iVar9 != 0))
        goto LAB_ram_481806e6;
        uVar2 = FUN_ram_48181584(iStack_74,uStack_70._2_2_);
        if ((uVar2 & 0x1f) == 0x1f) {
          iStack_90 = 0;
        }
        else {
          iStack_90 = 0x1f - (uVar2 & 0x1f);
          iVar9 = FUN_ram_4818014a(&iStack_7c,iStack_90);
          iVar1 = iStack_7c;
          uVar12 = (uint)uStack_76;
          if ((iVar9 != 0) || (iVar9 = FUN_ram_4818014a(&iStack_74,iStack_90), iVar9 != 0))
          goto LAB_ram_481806e6;
        }
        uVar6 = (uint)uStack_70._2_2_;
        iVar9 = -0x10;
        iVar7 = (uVar12 - uVar6) * 0x20;
        iVar3 = FUN_ram_4818014a(&iStack_74,iVar7);
        uVar2 = uVar12;
        if (iVar3 == 0) {
          piVar14 = (int *)((uVar12 - uVar6) * 4 + iVar11);
          do {
            uStack_76 = (ushort)uVar2;
            iStack_7c = iVar1;
            iVar9 = FUN_ram_4818023e(&iStack_7c,&iStack_74);
            if (iVar9 < 0) {
              if (uStack_70._2_2_ != 0) {
                FUN_ram_48181940(iStack_74,uStack_70._2_2_,iVar7);
              }
              uStack_8c = uVar12 - 1;
              uVar5 = uVar6 - 1;
              if (uStack_8c <= uVar5) goto LAB_ram_48180990;
              piVar14 = (int *)(((0x3fffffff - uVar6) + uVar12) * 4 + iVar11);
              goto LAB_ram_48180856;
            }
            *piVar14 = *piVar14 + 1;
            iVar9 = FUN_ram_481804de(&iStack_7c,&iStack_7c,&iStack_74,0xffffffff);
            uVar2 = (uint)uStack_76;
            iVar1 = iStack_7c;
          } while (iVar9 == 0);
        }
      }
      else {
        uVar13 = (uint)uStack_66;
        iVar9 = -0x10;
        iVar11 = iStack_6c;
        uVar2 = uVar12;
      }
    }
    else {
      uVar13 = 0;
      iVar11 = 0;
LAB_ram_481806e6:
      iVar9 = -0x10;
      uVar2 = uVar12;
    }
    goto LAB_ram_481806e8;
  }
  if (param_1 == (undefined4 *)0x0) {
LAB_ram_48180696:
    if ((param_2 == 0) || (iVar1 = FUN_ram_4817fe72(param_2,param_3), iVar1 == 0)) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_ram_4817fbba(param_1,1);
    if (iVar1 == 0) {
      memset((void *)*param_1,0,(uint)*(ushort *)((int)param_1 + 6) << 2);
      *(undefined4 *)*param_1 = 0;
      *(undefined2 *)(param_1 + 1) = 1;
      goto LAB_ram_48180696;
    }
  }
  if (iStack_74 == 0) {
    uStack_70 = 1;
    iVar9 = -0x10;
    goto LAB_ram_4818071c;
  }
  uVar13 = 0;
  iVar11 = 0;
  iVar9 = -0x10;
LAB_ram_481806fe:
  FUN_ram_48178b14(iStack_74,(uint)uStack_70._2_2_ << 2);
  goto LAB_ram_48180708;
  while( true ) {
    iVar3 = ((int)piVar14 - iVar11) * 8;
    iVar9 = FUN_ram_4818014a(&puStack_64,iVar3);
    if (iVar9 != 0) goto LAB_ram_4818090a;
    uStack_76 = (ushort)uVar2;
    iStack_7c = iVar1;
    iVar9 = FUN_ram_481804de(&iStack_7c,&iStack_7c,&puStack_64,0xffffffff);
    iVar1 = iStack_7c;
    uVar2 = (uint)uStack_76;
    if (iVar9 != 0) goto LAB_ram_481806e8;
    puStack_54 = &uStack_80;
    uStack_80 = 0;
    uStack_50 = 0x10001;
    iVar9 = FUN_ram_4818023e(&iStack_7c,&puStack_54);
    if (iVar9 < 0) {
      iVar9 = FUN_ram_4817fe72(&puStack_64,&iStack_74);
      if ((iVar9 != 0) || (iVar9 = FUN_ram_4818014a(&puStack_64,iVar3), iVar9 != 0))
      goto LAB_ram_4818090a;
      iVar9 = FUN_ram_481804de(&iStack_7c,&iStack_7c,&puStack_64,1);
      uVar2 = (uint)uStack_76;
      iVar1 = iStack_7c;
      if (iVar9 != 0) goto LAB_ram_481806e8;
      *piVar14 = *piVar14 + -1;
    }
    piVar14 = piVar14 + -1;
    uStack_8c = uStack_8c - 1;
    if (uStack_8c <= uVar5) break;
LAB_ram_48180856:
    puVar8 = (uint *)(iVar1 + uStack_8c * 4);
    uVar12 = *(uint *)(iStack_74 + uVar5 * 4);
    puVar10 = (undefined4 *)(iVar1 + uStack_8c * 4 + -4);
    iVar9 = -1;
    if (*puVar8 < uVar12) {
      uVar15 = __udivdi3(*puVar10,*puVar8,uVar12,0);
      iVar9 = (int)uVar15;
      if ((int)((ulonglong)uVar15 >> 0x20) != 0) {
        iVar9 = -1;
      }
    }
    *piVar14 = iVar9;
    ppuStack_4c = (undefined4 **)0x0;
    if (uStack_8c != 1) {
      ppuStack_4c = (undefined4 **)puVar8[-2];
    }
    uStack_48 = *puVar10;
    uStack_44 = *puVar8;
    iVar9 = *piVar14 + 1;
    do {
      *piVar14 = iVar9 + -1;
      iVar9 = FUN_ram_4817ff24(&puStack_64,0);
      if (iVar9 != 0) goto LAB_ram_4818090a;
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar4 = *(undefined4 *)(iStack_74 + uVar6 * 4 + -8);
      }
      *puStack_64 = uVar4;
      puStack_64[1] = *(undefined4 *)(iStack_74 + uVar5 * 4);
      iVar9 = FUN_ram_4817c1e8(&puStack_64,&puStack_64,*piVar14);
      if (iVar9 != 0) goto LAB_ram_481806e8;
      iVar3 = FUN_ram_4818023e(&puStack_64,&pppuStack_5c);
      iVar9 = *piVar14;
    } while (0 < iVar3);
    iVar9 = FUN_ram_4817c1e8(&puStack_64,&iStack_74);
    if (iVar9 != 0) goto LAB_ram_481806e8;
  }
LAB_ram_48180990:
  if (param_1 == (undefined4 *)0x0) {
LAB_ram_481809ae:
    if (param_2 != 0) {
      if (uVar2 != 0) {
        FUN_ram_48181940(iVar1,uVar2,iStack_90);
      }
      uStack_78 = *(undefined2 *)(param_3 + 4);
      uStack_76 = (ushort)uVar2;
      iStack_7c = iVar1;
      iVar9 = FUN_ram_4817fe72(param_2,&iStack_7c);
      if (iVar9 != 0) goto LAB_ram_4818090a;
      iVar9 = FUN_ram_481802e8(param_2,0);
      if (iVar9 == 0) {
        *(undefined2 *)(param_2 + 4) = 1;
      }
    }
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_ram_4817fe72(param_1,&iStack_6c);
    if (iVar9 == 0) {
      *(short *)(param_1 + 1) = *(short *)(param_3 + 4) * *(short *)(param_4 + 4);
      goto LAB_ram_481809ae;
    }
LAB_ram_4818090a:
    iVar9 = -0x10;
  }
LAB_ram_481806e8:
  if (iVar1 != 0) {
    FUN_ram_48178b14(iVar1,uVar2 << 2);
  }
  if (iStack_74 != 0) goto LAB_ram_481806fe;
LAB_ram_48180708:
  iStack_74 = 0;
  uStack_70 = 1;
  if (iVar11 != 0) {
    FUN_ram_48178b14(iVar11,uVar13 << 2);
  }
LAB_ram_4818071c:
  if (puStack_64 != (undefined4 *)0x0) {
    FUN_ram_48178b14(puStack_64,(uStack_60 >> 0x10) << 2);
  }
  puStack_64 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_ram_48178af2(&ppuStack_4c,0xc);
  return iVar9;
}


