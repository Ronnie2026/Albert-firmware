/* Firmware entry: 0x4815f7e6 */

/* WARNING: Type propagation algorithm not settling */

int FUN_ram_4815f7e6(uint *param_1,uint *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uStack_21;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_2,0,200);
  FUN_ram_4ff45158(param_2,param_1,0x68);
  uVar8 = *param_2 & 8;
  if ((param_1[0x16] != 0) && (iVar5 = FUN_ram_481626e2(), iVar5 != 0)) {
    uVar6 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_init","E (%lu) %s: failed to set voltage (0x%x)\n",uVar6,"sdmmc_init",
                     iVar5);
    return iVar5;
  }
  if (uVar8 == 0) {
    iVar5 = FUN_ram_4815f6f8(param_2);
    if (iVar5 != 0) {
      return iVar5;
    }
    iVar5 = FUN_ram_4815f5f6(param_2);
    if (iVar5 != 0) {
      return iVar5;
    }
  }
  iVar5 = FUN_ram_4815f79c(param_2);
  if (iVar5 != 0) {
    return iVar5;
  }
  iVar5 = FUN_ram_4815fdf6(param_2);
  if (iVar5 != 0) {
    return iVar5;
  }
  iVar5 = FUN_ram_48162808(param_2);
  if (iVar5 != 0) {
    return iVar5;
  }
  iVar5 = FUN_ram_48161650(param_2);
  if (iVar5 != 0) {
    return iVar5;
  }
  iVar5 = FUN_ram_48160270(param_2);
  if (iVar5 != 0) {
    return iVar5;
  }
  uVar7 = param_2[0x31] & 1;
  if ((*param_1 & 0x80) == 0) {
    if (uVar8 == 0) {
      if (uVar7 == 0) {
        iVar5 = FUN_ram_4815ed9c(param_2);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = FUN_ram_4815ef62(param_2);
        goto joined_r0x4815f8c4;
      }
    }
    else {
      iVar5 = FUN_ram_481622a2(param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
      if (uVar7 == 0) goto LAB_ram_4815f8c8;
    }
LAB_ram_4815f9cc:
    iVar5 = FUN_ram_4815eb20(param_2);
    if (iVar5 != 0) {
      return iVar5;
    }
    if ((param_2[0x31] & 4) == 0) {
      if ((param_2[0x1a] & 0x41000000) == 0x41000000) {
        iVar5 = FUN_ram_48161fe2(param_2);
        if (iVar5 != 0) {
          return iVar5;
        }
        bVar4 = true;
        bVar2 = true;
        bVar1 = false;
      }
      else {
        bVar4 = false;
        bVar1 = false;
        bVar2 = true;
      }
    }
    else {
      bVar4 = false;
      bVar1 = true;
      bVar2 = false;
    }
    iVar5 = FUN_ram_4815ec88(param_2);
    if (iVar5 != 0) {
      return iVar5;
    }
    if (uVar8 == 0) {
      iVar5 = FUN_ram_4815ed9c(param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = FUN_ram_4815ee6a(param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
      if (bVar1) {
        iVar5 = FUN_ram_4815edf4(param_2);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = FUN_ram_4815ef62(param_2);
        if (iVar5 != 0) {
          return iVar5;
        }
        goto LAB_ram_4815fa0a;
      }
      iVar5 = FUN_ram_4815ef62(param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
      if (bVar2) goto LAB_ram_4815fa9e;
      uStack_21 = 0;
      iVar5 = FUN_ram_4815efe4(param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
      bVar1 = false;
      bVar3 = false;
      goto LAB_ram_4815f90a;
    }
    iVar5 = FUN_ram_4815ee6a();
    if (iVar5 != 0) {
      return iVar5;
    }
    if (bVar1) {
LAB_ram_4815fa0a:
      bVar1 = false;
      if (bVar2) {
        bVar2 = true;
        goto LAB_ram_4815fa12;
      }
LAB_ram_4815fa48:
      iVar5 = FUN_ram_48160ec0(param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
      bVar2 = true;
LAB_ram_4815fa38:
      uStack_21 = 0;
      bVar3 = false;
      goto LAB_ram_4815f8e6;
    }
    if (bVar2) {
LAB_ram_4815fa9e:
      bVar2 = false;
LAB_ram_4815fa12:
      iVar5 = FUN_ram_481616d4(param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = FUN_ram_48161730(param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = FUN_ram_48161832(param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
      bVar1 = true;
      if (bVar2) goto LAB_ram_4815fa48;
      bVar2 = false;
      bVar1 = true;
      goto LAB_ram_4815fa38;
    }
    uStack_21 = 0;
    iVar5 = FUN_ram_4815efe4(param_2);
    if (iVar5 != 0) {
      return iVar5;
    }
    bVar1 = false;
    bVar3 = false;
  }
  else {
    if (uVar7 != 0) goto LAB_ram_4815f9cc;
    if (uVar8 == 0) {
      iVar5 = FUN_ram_4815ed9c(param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = FUN_ram_4815ef62(param_2);
joined_r0x4815f8c4:
      if (iVar5 != 0) {
        return iVar5;
      }
    }
LAB_ram_4815f8c8:
    uStack_21 = 0;
    iVar5 = FUN_ram_4815fea2(param_2,&uStack_21);
    if (iVar5 != 0) {
      return iVar5;
    }
    bVar4 = false;
    bVar2 = false;
    bVar1 = false;
    bVar3 = true;
LAB_ram_4815f8e6:
    iVar5 = FUN_ram_4815efe4(param_2);
    if (iVar5 != 0) {
      return iVar5;
    }
    if (uVar8 == 0) {
      if ((bVar1) && (iVar5 = FUN_ram_481617c8(param_2), iVar5 != 0)) {
        return iVar5;
      }
      if ((bVar3) && (iVar5 = FUN_ram_48160014(param_2), iVar5 != 0)) {
        return iVar5;
      }
      if ((bVar2) && (iVar5 = FUN_ram_48160ab0(param_2), iVar5 != 0)) {
        return iVar5;
      }
LAB_ram_4815f90a:
      iVar5 = FUN_ram_4815f048(param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
    }
  }
  if (bVar4) {
    iVar5 = FUN_ram_4815f038(param_2);
    if (iVar5 != 0) {
      return iVar5;
    }
    iVar5 = FUN_ram_4815f03e(param_2);
    if (iVar5 != 0) {
      return iVar5;
    }
    if (!bVar1) {
      iVar5 = FUN_ram_4815f0be(param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = thunk_FUN_ram_4816191c(param_2);
      goto joined_r0x4815fb16;
    }
  }
  else if (!bVar1) {
    iVar5 = FUN_ram_4815f0be(param_2);
    goto joined_r0x4815fb16;
  }
  iVar5 = FUN_ram_481625d4(param_2);
  if (iVar5 != 0) {
    return iVar5;
  }
  iVar5 = FUN_ram_4815f0be(param_2);
  if (iVar5 != 0) {
    return iVar5;
  }
  if ((bVar4) && (iVar5 = thunk_FUN_ram_4816191c(param_2), iVar5 != 0)) {
    return iVar5;
  }
  iVar5 = FUN_ram_481621fe(param_2);
joined_r0x4815fb16:
  if ((iVar5 == 0) &&
     (((!bVar2 || (iVar5 = FUN_ram_4816114c(param_2), iVar5 == 0)) && (iVar5 = 0, bVar3)))) {
    iVar5 = FUN_ram_4815ff36(param_2,&uStack_21);
  }
  return iVar5;
}


