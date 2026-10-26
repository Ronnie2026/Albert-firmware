/* Firmware entry: 0x481340f8 */

int FUN_ram_481340f8(int param_1,char *param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  iStack_3c = 0;
  if (param_4 == (int *)0x0) {
    return 0xca;
  }
  *param_4 = 0;
  if (param_1 == 0) {
    if (param_2 == (char *)0x0) {
      return 200;
    }
    if (param_3 == (uint *)0x0) {
      uVar3 = atoi(param_2);
      if (uVar3 == 0) {
LAB_ram_4813436e:
        uVar5 = 0;
        goto LAB_ram_48134370;
      }
      uVar5 = 0;
      if (0xffff < uVar3) {
        return 0xc9;
      }
LAB_ram_481342f8:
      if (uVar5 != 10) {
        uStack_24 = (uint)uStack_24._1_3_ << 8;
        uStack_2c = 0;
        uStack_30 = 0;
        uStack_34 = 0;
        uStack_28 = (uint)uStack_28._1_3_ << 8;
        iStack_38 = 0x100007f;
        goto LAB_ram_48134318;
      }
      uVar4 = 6;
      iStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_28 = (uint)uStack_28._1_3_ << 8;
      uStack_2c = 0x1000000;
      uStack_24 = CONCAT31(uStack_24._1_3_,6);
      uVar5 = 0;
    }
    else {
      uVar5 = param_3[1];
      if (uVar5 == 0) {
        uVar3 = atoi(param_2);
        if (uVar3 != 0) goto LAB_ram_481342bc;
        goto LAB_ram_4813436e;
      }
      if (uVar5 == 2) {
        uVar3 = atoi(param_2);
        if (uVar3 != 0) goto LAB_ram_481342bc;
        uVar5 = 2;
LAB_ram_48134370:
        if (*param_2 != '0') {
          return 0xc9;
        }
        uVar1 = 0;
        uVar3 = 0;
        if (param_1 != 0) {
LAB_ram_48134152:
          if ((param_3 != (uint *)0x0) && ((*param_3 & 4) != 0)) goto LAB_ram_481341d4;
          goto LAB_ram_4813415e;
        }
      }
      else {
        if (uVar5 != 10) {
          return 0xcc;
        }
        uVar3 = atoi(param_2);
        if (uVar3 == 0) {
          uVar5 = 10;
          goto LAB_ram_48134370;
        }
LAB_ram_481342bc:
        if (0xffff < uVar3) {
          return 0xc9;
        }
      }
      if ((param_3 == (uint *)0x0) || ((*param_3 & 1) == 0)) goto LAB_ram_481342f8;
      if (uVar5 != 10) {
        iStack_38 = 0;
        uStack_24 = (uint)uStack_24._1_3_ << 8;
        uStack_2c = 0;
        uStack_30 = 0;
        uStack_34 = 0;
        uStack_28 = (uint)uStack_28._1_3_ << 8;
        goto LAB_ram_48134202;
      }
      uVar4 = 6;
      iStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = (uint)uStack_28._1_3_ << 8;
      uStack_24 = CONCAT31(uStack_24._1_3_,6);
      uVar5 = 0;
    }
LAB_ram_48134262:
    iVar2 = FUN_ram_48133f7a(iStack_38,uStack_34,uStack_30,uStack_2c,uVar5,uVar4,param_1,param_3,
                             uVar3,&iStack_3c,0);
  }
  else {
    if (param_3 != (uint *)0x0) {
      uVar5 = param_3[1];
      if (uVar5 == 0) {
        if (param_2 != (char *)0x0) {
          uVar1 = atoi(param_2);
          if (uVar1 != 0) goto LAB_ram_4813414c;
          goto LAB_ram_4813436e;
        }
        iVar2 = 2;
        uVar1 = 0;
        if ((*param_3 & 4) != 0) goto LAB_ram_481341d2;
        goto LAB_ram_4813423c;
      }
      if (uVar5 != 2) {
        if (uVar5 != 10) {
          return 0xcc;
        }
        if (param_2 != (char *)0x0) {
          uVar1 = atoi(param_2);
          if (uVar1 == 0) {
            uVar5 = 10;
            goto LAB_ram_48134370;
          }
LAB_ram_4813414c:
          if (0xffff < uVar1) {
            return 0xc9;
          }
          goto LAB_ram_48134152;
        }
        uVar3 = *param_3;
        uVar1 = 0;
        if ((uVar3 & 4) != 0) goto LAB_ram_481341d2;
        goto LAB_ram_48134172;
      }
      if (param_2 != (char *)0x0) {
        uVar1 = atoi(param_2);
        if (uVar1 != 0) goto LAB_ram_4813414c;
        uVar5 = 2;
        goto LAB_ram_48134370;
      }
      iVar2 = 0;
      uVar1 = 0;
      if ((*param_3 & 4) == 0) goto LAB_ram_4813423c;
LAB_ram_481341d2:
      uVar1 = 0;
LAB_ram_481341d4:
      iVar2 = FUN_ram_48139330(param_1,&iStack_38);
      if (iVar2 == 0) {
        return 200;
      }
      uVar4 = uStack_24 & 0xff;
      if (uVar4 == 6) {
        if (uVar5 == 2) {
          return 200;
        }
      }
      else if (uVar4 == 0) {
        if (uVar5 == 10) {
          return 200;
        }
        goto LAB_ram_481341fe;
      }
LAB_ram_48134258:
      uVar5 = uStack_28 & 0xff;
      uVar3 = uVar1;
      goto LAB_ram_48134262;
    }
    if (param_2 == (char *)0x0) {
      uVar1 = 0;
      iVar2 = 2;
    }
    else {
      uVar1 = atoi(param_2);
      if (uVar1 == 0) goto LAB_ram_4813436e;
      uVar5 = 0;
      if (0xffff < uVar1) {
        return 0xc9;
      }
LAB_ram_4813415e:
      iVar2 = 0;
      if ((uVar5 != 2) && (iVar2 = 2, uVar5 == 10)) {
        uVar3 = *param_3;
LAB_ram_48134172:
        iVar2 = (uVar3 >> 3 & 2) + 1;
      }
    }
LAB_ram_4813423c:
    iVar2 = FUN_ram_4814f694(param_1,&iStack_38,iVar2);
    if (iVar2 != 0) {
      return 0xca;
    }
    uVar4 = uStack_24 & 0xff;
    if (uVar4 != 0) goto LAB_ram_48134258;
LAB_ram_481341fe:
    uVar3 = uVar1;
    if (iStack_38 == 0) {
LAB_ram_48134202:
      iVar2 = FUN_ram_48133f7a(0,uStack_34,uStack_30,uStack_2c,uStack_28 & 0xff,0,param_1,param_3,
                               uVar3,&iStack_3c,0);
      if (iVar2 != 0) goto LAB_ram_48134334;
      goto LAB_ram_48134222;
    }
LAB_ram_48134318:
    iVar2 = FUN_ram_48133f7a(iStack_38,uStack_34,uStack_30,uStack_2c,uStack_28 & 0xff,0,param_1,
                             param_3,uVar3,&iStack_3c,0);
  }
  if (iVar2 != 0) {
LAB_ram_48134334:
    *param_4 = 0;
    return iVar2;
  }
  if (iStack_3c != 0) {
    *(undefined4 *)(iStack_3c + 0x1c) = 0;
  }
LAB_ram_48134222:
  *param_4 = iStack_3c;
  return 0;
}


