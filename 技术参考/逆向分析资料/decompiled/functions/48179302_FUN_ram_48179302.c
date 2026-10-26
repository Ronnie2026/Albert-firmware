/* Firmware entry: 0x48179302 */

int FUN_ram_48179302(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined1 auStack_28 [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_3 = param_3 + param_2;
  FUN_ram_4817fb86(auStack_28);
  iStack_2c = param_2;
  iVar1 = FUN_ram_4817f40e(&iStack_2c,param_3,&iStack_30,0x30);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_3 != iStack_2c + iStack_30) {
    return -0x4080;
  }
  iVar1 = FUN_ram_4817f55c(&iStack_2c,param_3,&iStack_34);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (iStack_34 != 0) {
    return -0x4080;
  }
  iVar1 = FUN_ram_4817f564(&iStack_2c,param_3,auStack_28);
  if (iVar1 != 0) {
    FUN_ram_4817fb90(auStack_28);
    goto LAB_ram_48179360;
  }
  iVar1 = FUN_ram_481802e8(auStack_28,0);
  if (iVar1 == 0) {
    FUN_ram_4817fb90(auStack_28);
    iVar1 = -0x4080;
    goto LAB_ram_48179360;
  }
  iVar1 = FUN_ram_4817fe72(param_1 + 8,auStack_28);
  if (iVar1 == 0) {
    uVar2 = FUN_ram_48180076(param_1 + 8);
    *(undefined4 *)(param_1 + 4) = uVar2;
LAB_ram_4817939e:
    iVar1 = FUN_ram_4817f564(&iStack_2c,param_3,auStack_28);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_481802e8(auStack_28,0);
      if (iVar1 == 0) {
LAB_ram_48179554:
        iVar1 = -0x4080;
      }
      else {
        iVar1 = FUN_ram_4817fe72(param_1 + 0x10,auStack_28);
        if (((iVar1 == 0) || (iVar1 = iVar1 + -0x4080, iVar1 == 0)) &&
           (iVar1 = FUN_ram_4817f564(&iStack_2c,param_3,auStack_28), iVar1 == 0)) {
          iVar1 = FUN_ram_481802e8(auStack_28,0);
          if (iVar1 == 0) goto LAB_ram_48179554;
          iVar1 = FUN_ram_4817fe72(param_1 + 0x18,auStack_28);
          if (((iVar1 == 0) || (iVar1 = iVar1 + -0x4080, iVar1 == 0)) &&
             (iVar1 = FUN_ram_4817f564(&iStack_2c,param_3,auStack_28), iVar1 == 0)) {
            iVar1 = FUN_ram_481802e8(auStack_28,0);
            if (iVar1 == 0) goto LAB_ram_48179554;
            iVar1 = FUN_ram_4817fe72(param_1 + 0x20,auStack_28);
            if (((iVar1 == 0) || (iVar1 = iVar1 + -0x4080, iVar1 == 0)) &&
               (iVar1 = FUN_ram_4817f564(&iStack_2c,param_3,auStack_28), iVar1 == 0)) {
              iVar1 = FUN_ram_481802e8(auStack_28,0);
              if (iVar1 == 0) goto LAB_ram_48179554;
              iVar1 = FUN_ram_4817fe72(param_1 + 0x28,auStack_28);
              if (((iVar1 == 0) || (iVar1 = iVar1 + -0x4080, iVar1 == 0)) &&
                 (iVar1 = FUN_ram_4817f564(&iStack_2c,param_3,auStack_28), iVar1 == 0)) {
                iVar1 = FUN_ram_481802e8(auStack_28,0);
                if (iVar1 == 0) goto LAB_ram_48179554;
                iVar1 = FUN_ram_4817fe72(param_1 + 0x30,auStack_28);
                if ((iVar1 == 0) &&
                   (iVar1 = FUN_ram_4817f564(&iStack_2c,param_3,auStack_28), iVar1 == 0)) {
                  iVar1 = FUN_ram_481802e8(auStack_28,0);
                  if (iVar1 == 0) goto LAB_ram_48179554;
                  iVar1 = FUN_ram_4817fe72(param_1 + 0x38,auStack_28);
                  if ((iVar1 == 0) &&
                     (iVar1 = FUN_ram_4817f564(&iStack_2c,param_3,auStack_28), iVar1 == 0)) {
                    iVar1 = FUN_ram_481802e8(auStack_28,0);
                    if (iVar1 == 0) goto LAB_ram_48179554;
                    iVar1 = FUN_ram_4817fe72(param_1 + 0x40,auStack_28);
                    if ((iVar1 == 0) && (iVar1 = FUN_ram_48179024(param_1), iVar1 == 0)) {
                      iVar1 = FUN_ram_481791c8(param_1);
                      if (iVar1 == 0) {
                        if (iStack_2c == param_3) {
                          FUN_ram_4817fb90(auStack_28);
                          return 0;
                        }
                        FUN_ram_4817fb90(auStack_28);
                        iVar1 = -0x66;
                      }
                      else {
                        FUN_ram_4817fb90(auStack_28);
                        iVar1 = -0x4200;
                      }
                      goto LAB_ram_48179360;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = iVar1 + -0x4080;
    if (iVar1 == 0) goto LAB_ram_4817939e;
  }
  FUN_ram_4817fb90(auStack_28);
LAB_ram_48179360:
  if (param_1 != 0) {
    FUN_ram_48178d40(param_1);
  }
  return iVar1;
}


