/* Firmware entry: 0x4815630e */

void FUN_ram_4815630e(int *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  code *UNRECOVERED_JUMPTABLE;
  byte *pbVar9;
  int aiStack_24 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 < 4) {
    return;
  }
  uVar3 = (uint)param_2[3] | (*(ushort *)(param_2 + 2) & 0xff) << 8;
  if (uVar3 < 4) {
    return;
  }
  if (param_3 < (int)uVar3) {
    return;
  }
  bVar8 = *(byte *)(param_1 + 4);
  if (bVar8 < 2) {
    return;
  }
  bVar1 = *param_2;
  bVar7 = param_2[1];
  pbVar9 = param_2 + 4;
  aiStack_24[0] = uVar3 - 4;
  if (bVar1 == 5) {
    if (bVar8 < 9) {
      if (6 < bVar8) {
        *(undefined1 *)(param_1 + 4) = 6;
      }
    }
    else if (bVar8 == 9) {
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 4) = 5;
      iVar4 = *param_1;
      if (*(code **)(param_1[1] + 0x20) != (code *)0x0) {
        (**(code **)(param_1[1] + 0x20))();
      }
      FUN_ram_4814268a(FUN_ram_48156044,param_1);
      FUN_ram_48142636((uint)*(byte *)(iVar4 + 4) * 1000,FUN_ram_48156044,param_1);
    }
LAB_ram_4815647a:
    uVar3 = 0;
    param_2 = (byte *)0x0;
    uVar6 = 6;
LAB_ram_48156484:
    FUN_ram_48155f4a(param_1,uVar6,bVar7,param_2,uVar3);
    return;
  }
  if (5 < bVar1) {
    if (bVar1 != 6) {
      if (bVar1 == 7) {
        if (aiStack_24[0] < 4) {
          return;
        }
        if (bVar8 != 7) {
          return;
        }
        goto LAB_ram_481565aa;
      }
LAB_ram_4815655e:
      if ((*(code **)(param_1[1] + 0x34) != (code *)0x0) &&
         (iVar4 = (**(code **)(param_1[1] + 0x34))(param_1,bVar1,bVar7,pbVar9), iVar4 != 0)) {
        return;
      }
      bVar7 = *(char *)((int)param_1 + 0x12) + 1;
      *(char *)((int)param_1 + 0x12) = *(char *)((int)param_1 + 0x12) + '\x01';
      uVar6 = 7;
      goto LAB_ram_48156484;
    }
    if (bVar8 == 7) {
      *(undefined1 *)(param_1 + 4) = 6;
      return;
    }
    if (bVar8 < 8) {
      if (bVar8 != 4) {
        if (bVar8 != 5) {
          return;
        }
        FUN_ram_4814268a(FUN_ram_48156044,param_1);
        *(undefined1 *)(param_1 + 4) = 3;
        UNRECOVERED_JUMPTABLE = *(code **)(param_1[1] + 0x28);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          return;
        }
        goto LAB_ram_481564ca;
      }
      FUN_ram_4814268a(FUN_ram_48156044,param_1);
      *(undefined1 *)(param_1 + 4) = 2;
      UNRECOVERED_JUMPTABLE = *(code **)(param_1[1] + 0x28);
joined_r0x48156668:
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return;
      }
LAB_ram_481564ca:
                    /* WARNING: Could not recover jumptable at 0x481564da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return;
    }
LAB_ram_48156590:
    if (bVar8 != 9) {
      return;
    }
    if (*(code **)(param_1[1] + 0x20) != (code *)0x0) {
      (**(code **)(param_1[1] + 0x20))(param_1);
    }
    FUN_ram_48155c50(param_1,0);
    goto LAB_ram_481565aa;
  }
  if (bVar1 == 2) {
    if (*(byte *)((int)param_1 + 0x13) != bVar7) {
      return;
    }
    if ((char)param_1[3] != '\0') {
      return;
    }
    iVar4 = *param_1;
    if (*(code **)(param_1[1] + 0xc) == (code *)0x0) {
      if (aiStack_24[0] != 0) {
        return;
      }
    }
    else {
      iVar5 = (**(code **)(param_1[1] + 0xc))(param_1,pbVar9,aiStack_24[0]);
      if (iVar5 == 0) {
        return;
      }
      bVar8 = *(byte *)(param_1 + 4);
    }
    *(undefined1 *)((int)param_1 + 0x16) = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    if (bVar8 != 7) {
      if (bVar8 < 8) {
        if (3 < bVar8) {
          if (bVar8 != 6) {
            return;
          }
          *(undefined1 *)(param_1 + 4) = 7;
          *(undefined1 *)(param_1 + 5) = *(undefined1 *)(iVar4 + 5);
          return;
        }
        goto LAB_ram_481563b4;
      }
      if (bVar8 == 8) {
        FUN_ram_4814268a(FUN_ram_48156044,param_1);
        *(undefined1 *)(param_1 + 4) = 9;
        *(undefined1 *)(param_1 + 5) = *(undefined1 *)(iVar4 + 5);
        UNRECOVERED_JUMPTABLE = *(code **)(param_1[1] + 0x1c);
        goto joined_r0x48156668;
      }
      goto LAB_ram_48156590;
    }
  }
  else {
    if (bVar1 < 3) {
      if (bVar1 != 1) goto LAB_ram_4815655e;
      if (bVar8 < 6) {
        if (3 < bVar8) {
          return;
        }
        if (bVar8 == 2) {
          FUN_ram_48155f4a(param_1,6,bVar7,0,0);
          return;
        }
LAB_ram_481563fa:
        FUN_ram_48155c50(param_1,0);
        *(undefined1 *)(param_1 + 4) = 6;
      }
      else if (bVar8 == 9) {
        if (*(code **)(param_1[1] + 0x20) != (code *)0x0) {
          (**(code **)(param_1[1] + 0x20))();
        }
        goto LAB_ram_481563fa;
      }
      if (*(code **)(param_1[1] + 0x18) != (code *)0x0) {
        uVar3 = (**(code **)(param_1[1] + 0x18))
                          (param_1,pbVar9,aiStack_24,
                           *(byte *)((int)param_1 + 0x17) <= *(byte *)((int)param_1 + 0x15));
        FUN_ram_48155f4a(param_1,uVar3 & 0xff,bVar7,pbVar9,aiStack_24[0]);
        if (uVar3 != 2) {
          if ((char)param_1[4] != '\a') {
            *(undefined1 *)(param_1 + 4) = 6;
          }
          if (uVar3 != 3) {
            return;
          }
          *(char *)((int)param_1 + 0x15) = *(char *)((int)param_1 + 0x15) + '\x01';
          return;
        }
LAB_ram_48156612:
        if ((char)param_1[4] == '\a') {
          FUN_ram_4814268a(FUN_ram_48156044,param_1);
          *(undefined1 *)(param_1 + 4) = 9;
          if (*(code **)(param_1[1] + 0x1c) != (code *)0x0) {
            (**(code **)(param_1[1] + 0x1c))(param_1);
          }
        }
        else {
          *(undefined1 *)(param_1 + 4) = 8;
        }
        *(undefined1 *)((int)param_1 + 0x15) = 0;
        return;
      }
      if (aiStack_24[0] == 0) {
        FUN_ram_48155f4a(param_1,2,bVar7,pbVar9,0);
        goto LAB_ram_48156612;
      }
      FUN_ram_48155f4a(param_1,4,bVar7,pbVar9);
      if ((char)param_1[4] == '\a') {
        return;
      }
      goto LAB_ram_481565aa;
    }
    if (*(byte *)((int)param_1 + 0x13) != bVar7) {
      return;
    }
    if ((char)param_1[3] != '\0') {
      return;
    }
    if (bVar1 == 3) {
      cVar2 = *(char *)((int)param_1 + 0x16);
      *(char *)((int)param_1 + 0x16) = cVar2 + '\x01';
      UNRECOVERED_JUMPTABLE = *(code **)(param_1[1] + 0x10);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return;
      }
      iVar4 = (*UNRECOVERED_JUMPTABLE)
                        (param_1,pbVar9,aiStack_24[0],
                         *(byte *)((int)param_1 + 0x17) <= (byte)(cVar2 + 1U));
    }
    else {
      *(undefined1 *)((int)param_1 + 0x16) = 0;
      UNRECOVERED_JUMPTABLE = *(code **)(param_1[1] + 0x14);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return;
      }
      iVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,pbVar9,aiStack_24[0]);
    }
    if (iVar4 == 0) {
      return;
    }
    bVar8 = *(byte *)(param_1 + 4);
    *(undefined1 *)(param_1 + 3) = 1;
    if (bVar8 != 7) {
      if (7 < bVar8) {
        if (bVar8 == 8) goto LAB_ram_481564e2;
        goto LAB_ram_48156590;
      }
      if (3 < bVar8) {
        if (bVar8 != 6) {
          return;
        }
LAB_ram_481564e2:
        FUN_ram_4814268a(FUN_ram_48156044,param_1);
        if (iVar4 < 0) {
          *(undefined1 *)(param_1 + 4) = 3;
          return;
        }
        FUN_ram_48155c50(param_1,0);
        return;
      }
LAB_ram_481563b4:
      if (bVar8 < 2) {
        return;
      }
      goto LAB_ram_4815647a;
    }
  }
  FUN_ram_4814268a(FUN_ram_48156044,param_1);
  FUN_ram_48155c50(param_1,0);
LAB_ram_481565aa:
  *(undefined1 *)(param_1 + 4) = 6;
  return;
}


