/* Firmware entry: 0x4801dd3e */

int FUN_ram_4801dd3e(int param_1,uint *param_2,byte *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  size_t sVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  char *__s;
  byte bVar9;
  byte *pbVar10;
  byte bStack_23;
  byte bStack_22;
  byte bStack_21;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar7 = *(uint *)(param_1 + 4);
  uVar6 = uVar7 << 3;
  bVar9 = (byte)(uVar6 >> 0x18);
  bVar5 = (byte)uVar6;
  if (uVar7 < 0x20000000) {
    if (uVar6 < 0x80) {
      iVar1 = 1;
      *param_3 = bVar5;
    }
    else {
      *param_3 = bVar5 | 0x80;
      uVar6 = (uVar7 & 0x1fffffff) >> 4;
      bVar5 = (byte)uVar6;
      if (uVar6 < 0x80) {
        iVar1 = 2;
        param_3[1] = bVar5;
      }
      else {
        param_3[1] = bVar5 | 0x80;
        uVar6 = (uVar7 & 0x1fffffff) >> 0xb;
        bVar5 = (byte)uVar6;
        if (uVar6 < 0x80) {
          iVar1 = 3;
          param_3[2] = bVar5;
        }
        else {
          param_3[2] = bVar5 | 0x80;
          uVar6 = (uVar7 & 0x1fffffff) >> 0x12;
          bVar5 = (byte)uVar6;
          if (uVar6 < 0x80) {
            iVar1 = 4;
            param_3[3] = bVar5;
          }
          else {
            param_3[3] = bVar5 | 0x80;
            iVar1 = 5;
            param_3[4] = bVar9 >> 4;
          }
        }
      }
    }
  }
  else {
    param_3[4] = (byte)((uVar7 >> 0x1d) << 4) | bVar9 >> 4;
    param_3[1] = (byte)((uVar7 & 0x1fffffff) >> 4) | 0x80;
    param_3[2] = (byte)((uVar7 & 0x1fffffff) >> 0xb) | 0x80;
    param_3[3] = (byte)((uVar7 & 0x1fffffff) >> 0x12) | 0x80;
    *param_3 = bVar5 | 0x80;
    iVar1 = 5;
  }
  uVar6 = *(uint *)(param_1 + 0xc);
  if (uVar6 == 8) {
LAB_ram_4801de64:
    iVar4 = FUN_ram_4801ca0a(*param_2,param_2[1],param_3 + iVar1);
    return iVar4 + iVar1;
  }
  if (uVar6 < 9) {
    if (uVar6 == 4) {
      uVar6 = (int)param_2[1] >> 0x1f;
      iVar4 = FUN_ram_4801ca0a(*param_2 << 1 ^ uVar6,(param_2[1] << 1 | *param_2 >> 0x1f) ^ uVar6,
                               param_3 + iVar1);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar4 + iVar1;
    }
    if (4 < uVar6) {
      if (uVar6 == 6) {
        uVar7 = *param_2;
        param_3 = param_3 + iVar1;
        iVar4 = 0;
        uVar6 = uVar7;
        if (0x7f < uVar7) {
          *param_3 = (byte)uVar7 | 0x80;
          uVar6 = uVar7 >> 7;
          if (uVar6 < 0x80) {
            param_3 = param_3 + 1;
            iVar4 = 1;
          }
          else {
            param_3[1] = (byte)uVar6 | 0x80;
            uVar6 = uVar7 >> 0xe;
            if (uVar6 < 0x80) {
              param_3 = param_3 + 2;
              iVar4 = 2;
            }
            else {
              param_3[2] = (byte)uVar6 | 0x80;
              uVar6 = uVar7 >> 0x15;
              if (uVar6 < 0x80) {
                param_3 = param_3 + 3;
                iVar4 = 3;
              }
              else {
                param_3[3] = (byte)uVar6 | 0x80;
                uVar6 = uVar7 >> 0x1c;
                param_3 = param_3 + 4;
                iVar4 = 4;
              }
            }
          }
        }
        *param_3 = (byte)uVar6;
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar1 + 1 + iVar4;
      }
      if (uVar6 != 7) goto LAB_ram_4801ddee;
LAB_ram_4801decc:
      pbVar8 = param_3 + iVar1;
      *param_3 = *param_3 | 5;
      uVar6 = *param_2;
      *pbVar8 = (byte)uVar6;
      pbVar8[1] = (byte)(uVar6 >> 8);
      pbVar8[2] = (byte)(uVar6 >> 0x10);
      pbVar8[3] = (byte)(uVar6 >> 0x18);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar1 + 4;
    }
    if (uVar6 == 1) {
      param_3 = param_3 + iVar1;
      uVar6 = *param_2 << 1 ^ (int)*param_2 >> 0x1f;
      if (uVar6 < 0x80) {
        iVar4 = 0;
      }
      else {
        *param_3 = (byte)uVar6 | 0x80;
        uVar7 = uVar6 >> 7;
        if (uVar7 < 0x80) {
          param_3 = param_3 + 1;
          iVar4 = 1;
          uVar6 = uVar7;
        }
        else {
          param_3[1] = (byte)uVar7 | 0x80;
          uVar7 = uVar6 >> 0xe;
          if (uVar7 < 0x80) {
            param_3 = param_3 + 2;
            iVar4 = 2;
            uVar6 = uVar7;
          }
          else {
            param_3[2] = (byte)uVar7 | 0x80;
            uVar7 = uVar6 >> 0x15;
            if (uVar7 < 0x80) {
              param_3 = param_3 + 3;
              iVar4 = 3;
              uVar6 = uVar7;
            }
            else {
              param_3[3] = (byte)uVar7 | 0x80;
              uVar6 = uVar6 >> 0x1c;
              param_3 = param_3 + 4;
              iVar4 = 4;
            }
          }
        }
      }
      *param_3 = (byte)uVar6;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar1 + 1 + iVar4;
    }
    if (1 < uVar6) {
      if (uVar6 != 2) goto LAB_ram_4801de64;
      goto LAB_ram_4801decc;
    }
  }
  else {
    if (uVar6 == 0xe) {
      pbVar8 = param_3 + iVar1;
      *param_3 = *param_3 | 2;
      __s = (char *)*param_2;
      if (__s == (char *)0x0) {
        *pbVar8 = 0;
        iVar4 = 1;
      }
      else {
        sVar3 = strlen(__s);
        if (sVar3 < 0x80) {
          iVar4 = 1;
          pbVar10 = pbVar8;
          uVar6 = sVar3;
        }
        else {
          *pbVar8 = (byte)sVar3 | 0x80;
          uVar6 = sVar3 >> 7;
          if (uVar6 < 0x80) {
            iVar4 = 2;
            pbVar10 = pbVar8 + 1;
          }
          else {
            pbVar8[1] = (byte)uVar6 | 0x80;
            uVar6 = sVar3 >> 0xe;
            if (uVar6 < 0x80) {
              iVar4 = 3;
              pbVar10 = pbVar8 + 2;
            }
            else {
              pbVar8[2] = (byte)uVar6 | 0x80;
              uVar6 = sVar3 >> 0x15;
              if (uVar6 < 0x80) {
                iVar4 = 4;
                pbVar10 = pbVar8 + 3;
              }
              else {
                pbVar8[3] = (byte)uVar6 | 0x80;
                iVar4 = 5;
                pbVar10 = pbVar8 + 4;
                uVar6 = sVar3 >> 0x1c;
              }
            }
          }
        }
        *pbVar10 = (byte)uVar6;
        FUN_ram_4ff45158(pbVar8 + iVar4,__s,sVar3);
        iVar4 = sVar3 + iVar4;
      }
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar4 + iVar1;
    }
    if (0xe < uVar6) {
      if (uVar6 == 0xf) {
        pbVar8 = param_3 + iVar1;
        *param_3 = *param_3 | 2;
        uVar6 = *param_2;
        if (uVar6 < 0x80) {
          iVar4 = 1;
          pbVar10 = pbVar8;
          uVar7 = uVar6;
        }
        else {
          *pbVar8 = (byte)uVar6 | 0x80;
          uVar7 = uVar6 >> 7;
          if (uVar7 < 0x80) {
            iVar4 = 2;
            pbVar10 = pbVar8 + 1;
          }
          else {
            pbVar8[1] = (byte)uVar7 | 0x80;
            uVar7 = uVar6 >> 0xe;
            if (uVar7 < 0x80) {
              iVar4 = 3;
              pbVar10 = pbVar8 + 2;
            }
            else {
              pbVar8[2] = (byte)uVar7 | 0x80;
              uVar7 = uVar6 >> 0x15;
              if (uVar7 < 0x80) {
                iVar4 = 4;
                pbVar10 = pbVar8 + 3;
              }
              else {
                pbVar8[3] = (byte)uVar7 | 0x80;
                iVar4 = 5;
                pbVar10 = pbVar8 + 4;
                uVar7 = uVar6 >> 0x1c;
              }
            }
          }
        }
        *pbVar10 = (byte)uVar7;
        FUN_ram_4ff45158(pbVar8 + iVar4,param_2[1],uVar6);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar1 + uVar6 + iVar4;
      }
      if (uVar6 == 0x10) {
        pbVar8 = param_3 + iVar1;
        *param_3 = *param_3 | 2;
        puVar2 = (undefined4 *)*param_2;
        if (puVar2 == (undefined4 *)0x0) {
          *pbVar8 = 0;
          iVar4 = 1;
        }
        else {
          pbVar10 = pbVar8 + 1;
          if (*(int *)*puVar2 != 0x28aaeef9) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff44e88("protobuf-c.c",0x5c5,"protobuf_c_message_pack",
                             "((message)->descriptor)->magic == PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC"
                            );
          }
          uVar6 = FUN_ram_4801d44c(puVar2,pbVar10);
          bVar9 = (byte)uVar6;
          if (uVar6 < 0x80) {
            iVar4 = 0;
          }
          else {
            bVar5 = bVar9 | 0x80;
            bVar9 = (byte)(uVar6 >> 7);
            if (uVar6 < 0x4000) {
              FUN_ram_4ff4522c(pbVar8 + 2,pbVar10,uVar6);
              *pbVar8 = bVar5;
              iVar4 = 1;
              pbVar8 = pbVar10;
            }
            else if (uVar6 < 0x200000) {
              FUN_ram_4ff4522c(pbVar8 + 3,pbVar10,uVar6);
              pbVar8[1] = bVar9 | 0x80;
              *pbVar8 = bVar5;
              bVar9 = (byte)(uVar6 >> 0xe);
              iVar4 = 2;
              pbVar8 = pbVar8 + 2;
            }
            else if (uVar6 < 0x10000000) {
              FUN_ram_4ff4522c(pbVar8 + 4,pbVar10,uVar6);
              pbVar8[1] = bVar9 | 0x80;
              pbVar8[2] = (byte)(uVar6 >> 0xe) | 0x80;
              *pbVar8 = bVar5;
              bVar9 = (byte)(uVar6 >> 0x15);
              iVar4 = 3;
              pbVar8 = pbVar8 + 3;
            }
            else {
              FUN_ram_4ff4522c(pbVar8 + 5,pbVar10,uVar6);
              pbVar8[1] = bVar9 | 0x80;
              pbVar8[3] = (byte)(uVar6 >> 0x15) | 0x80;
              *pbVar8 = bVar5;
              pbVar8[2] = (byte)(uVar6 >> 0xe) | 0x80;
              bVar9 = (byte)(uVar6 >> 0x1c);
              iVar4 = 4;
              pbVar8 = pbVar8 + 4;
            }
          }
          *pbVar8 = bVar9;
          iVar4 = uVar6 + 1 + iVar4;
        }
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar4 + iVar1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("protobuf-c.c",0x470,"required_field_pack","0");
    }
    if (uVar6 == 0xc) {
      param_3[iVar1] = *param_2 != 0;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar1 + 1;
    }
    if (uVar6 != 0xd) {
      if (uVar6 == 10) goto LAB_ram_4801decc;
LAB_ram_4801ddee:
      pbVar8 = param_3 + iVar1;
      *param_3 = *param_3 | 1;
      uVar6 = param_2[1];
      uVar7 = *param_2;
      bStack_23 = (byte)(uVar6 >> 8);
      bStack_22 = (byte)(uVar6 >> 0x10);
      bStack_21 = (byte)(uVar6 >> 0x18);
      *pbVar8 = (byte)uVar7;
      pbVar8[4] = (byte)uVar6;
      pbVar8[1] = (byte)(uVar7 >> 8);
      pbVar8[2] = (byte)(uVar7 >> 0x10);
      pbVar8[3] = (byte)(uVar7 >> 0x18);
      pbVar8[5] = bStack_23;
      pbVar8[6] = bStack_22;
      pbVar8[7] = bStack_21;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar1 + 8;
    }
  }
  uVar6 = *param_2;
  param_3 = param_3 + iVar1;
  bVar9 = (byte)(uVar6 >> 0x18);
  if ((int)uVar6 < 0) {
    param_3[2] = (byte)(uVar6 >> 0xe) | 0x80;
    param_3[1] = (byte)(uVar6 >> 7) | 0x80;
    param_3[3] = (byte)(uVar6 >> 0x15) | 0x80;
    param_3[4] = bVar9 >> 4 | 0xf0;
    *param_3 = (byte)uVar6 | 0x80;
    param_3[8] = 0xff;
    param_3[7] = 0xff;
    param_3[6] = 0xff;
    param_3[5] = 0xff;
    param_3[9] = 1;
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return iVar1 + 10;
  }
  iVar4 = 1;
  uVar7 = uVar6;
  if (0x7f < uVar6) {
    *param_3 = (byte)uVar6 | 0x80;
    uVar7 = uVar6 >> 7;
    if (0x7f < uVar7) {
      param_3[1] = (byte)uVar7 | 0x80;
      bVar5 = (byte)(uVar6 >> 0xe);
      if (uVar6 >> 0xe < 0x80) {
        iVar4 = 3;
        param_3[2] = bVar5;
      }
      else {
        param_3[2] = bVar5 | 0x80;
        bVar5 = (byte)(uVar6 >> 0x15);
        if (uVar6 >> 0x15 < 0x80) {
          iVar4 = 4;
          param_3[3] = bVar5;
        }
        else {
          param_3[3] = bVar5 | 0x80;
          iVar4 = 5;
          param_3[4] = bVar9 >> 4;
        }
      }
      goto LAB_ram_4801e0bc;
    }
    param_3 = param_3 + 1;
    iVar4 = 2;
  }
  *param_3 = (byte)uVar7;
LAB_ram_4801e0bc:
  return iVar4 + iVar1;
}


