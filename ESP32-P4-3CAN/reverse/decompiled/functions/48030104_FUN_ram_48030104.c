/* Firmware entry: 0x48030104 */

/* WARNING: Type propagation algorithm not settling */

char FUN_ram_48030104(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  size_t sVar8;
  undefined4 uVar9;
  char *__s;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dc78 == (void *)0x0) {
    pvVar6 = (void *)FUN_ram_4ff206d8(0x3ffc,0x404);
    if (pvVar6 == (void *)0x0) goto LAB_ram_4803012e;
    memset(pvVar6,0,0x3ffc);
    memset((void *)((int)pvVar6 + 799),0,0x11);
    memset((void *)((int)pvVar6 + 0x330),0,0x200);
    *(undefined2 *)((int)pvVar6 + 0xe32) = 0x1bb;
    *(undefined4 *)((int)pvVar6 + 0xe34) = 0;
    *(undefined4 *)((int)pvVar6 + 0xe38) = 0;
    *(undefined4 *)((int)pvVar6 + 0xe3c) = 0;
    *(undefined4 *)((int)pvVar6 + 0xe40) = 0;
    *(undefined4 *)((int)pvVar6 + 0xe44) = 0;
    *(undefined4 *)((int)pvVar6 + 0xe48) = 0;
    *(undefined4 *)((int)pvVar6 + 0xe4c) = 0;
    *(undefined4 *)((int)pvVar6 + 0xe50) = 0;
    *(undefined4 *)((int)pvVar6 + 0xe54) = 0;
    *(undefined4 *)((int)pvVar6 + 0xe58) = 0;
    *(undefined4 *)((int)pvVar6 + 0xe5c) = 0;
    *(undefined4 *)((int)pvVar6 + 0xe60) = 0;
    *(undefined4 *)((int)pvVar6 + 0xe9c) = 0;
    *(undefined4 *)((int)pvVar6 + 0xea0) = 0;
    *(undefined4 *)((int)pvVar6 + 0xea4) = 0;
    *(undefined4 *)((int)pvVar6 + 0xea8) = 0;
    *(undefined4 *)((int)pvVar6 + 0xeac) = 0;
    *(undefined4 *)((int)pvVar6 + 0xeb0) = 0;
    *(undefined4 *)((int)pvVar6 + 0xeb4) = 0;
    *(undefined4 *)((int)pvVar6 + 0xeb8) = 0;
    *(undefined4 *)((int)pvVar6 + 0xebc) = 0;
    *(undefined4 *)((int)pvVar6 + 0xec0) = 0;
    memset((void *)((int)pvVar6 + 0xec4),0,0x2001);
    memset((void *)((int)pvVar6 + 0x2ed0),0,0x1000);
    memset((void *)((int)pvVar6 + 0x3ed0),0,0x120);
    *(undefined4 *)((int)pvVar6 + 0x3ff4) = 0;
    DAT_ram_4ff6dc78 = pvVar6;
    uVar5 = FUN_ram_48001f84(0x804);
  }
  else {
    uVar5 = FUN_ram_48001f84(0x804);
  }
  if (((uVar5 < 0x21000) || (uVar5 = FUN_ram_480020c6(0x804), uVar5 < 0x4000)) ||
     (iVar7 = FUN_ram_4802ff30(), pvVar6 = DAT_ram_4ff6dc78, puVar2 = DAT_ram_4ff6dc74, iVar7 == 0))
  {
LAB_ram_4803012e:
    puVar2 = DAT_ram_4ff6dc74;
    DAT_ram_4ff6dc74[0x1c4] = "failed";
    puVar2[0x1c5] = "resource_wait";
    return '\0';
  }
  *(char *)((int)DAT_ram_4ff6dc78 + 0x25c) = (char)param_1;
  *(undefined1 *)((int)pvVar6 + 0x25d) = 0;
  *(undefined1 *)((int)pvVar6 + 0xe9c) = 0;
  *(undefined4 *)((int)pvVar6 + 0xe64) = 0;
  *(undefined4 *)((int)pvVar6 + 0xe68) = 0;
  *(undefined4 *)((int)pvVar6 + 0xe6c) = 0;
  *(undefined4 *)((int)pvVar6 + 0xe70) = 0;
  *(undefined4 *)((int)pvVar6 + 0xe74) = 0;
  *(undefined2 *)((int)pvVar6 + 0xe78) = 0;
  *(undefined4 *)((int)pvVar6 + 0xe7c) = 0;
  *(undefined4 *)((int)pvVar6 + 0xe80) = 0;
  *(undefined4 *)((int)pvVar6 + 0xe84) = 0;
  *(undefined4 *)((int)pvVar6 + 0xe88) = 0;
  *(undefined4 *)((int)pvVar6 + 0xe8c) = 0;
  *(undefined4 *)((int)pvVar6 + 0xe90) = 0;
  *(undefined4 *)((int)pvVar6 + 0xe94) = 0;
  *(undefined4 *)((int)pvVar6 + 0xe98) = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined2 *)(puVar2 + 5) = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  *(undefined1 *)((int)pvVar6 + 0xe34) = 0;
  *(undefined4 *)((int)pvVar6 + 0x2ec8) = 0;
  *(undefined4 *)((int)pvVar6 + 0x3ff0) = 0;
  memset((void *)((int)pvVar6 + 0x3ed0),0,0x120);
  memset((void *)((int)pvVar6 + 0xec4),0,0x2001);
  *(undefined1 *)((int)pvVar6 + 0x3ffb) = 0;
  *(undefined4 *)((int)pvVar6 + 0x3ff4) = 0;
  *(undefined1 *)((int)pvVar6 + 0x3ff8) = 0;
  *(undefined1 *)((int)pvVar6 + 0x3ff9) = 0;
  *(undefined1 *)((int)pvVar6 + 0x3ffa) = 0;
  iVar7 = FUN_ram_48025ba6();
  *(int *)((int)pvVar6 + 0x2ecc) = iVar7 + 120000;
  memset((void *)((int)pvVar6 + 0x1e8),0,0x70);
  iVar7 = FUN_ram_4802ec52();
  if ((iVar7 != 0) && (DAT_ram_4ff6dcc8 != 0)) {
    pcVar3 = (char *)(DAT_ram_4ff6dcc8 + 0x63cf);
    sVar8 = strlen(pcVar3);
    if (sVar8 == 0x10) {
      __s = (char *)((int)pvVar6 + 799);
      FUN_ram_4ff45158(__s,pcVar3,0x11);
      if ((DAT_ram_4ff6dc9c != 0) && (cVar1 = *(char *)(DAT_ram_4ff6dc9c + 0x87b60), cVar1 != '\0'))
      {
        fence();
        fence();
        if (*(char *)(DAT_ram_4ff6dc9c + 0x87b5d) == '\0') {
          pcVar3 = (char *)(DAT_ram_4ff6dc9c + 0x5c);
          sVar8 = strlen(pcVar3);
          if (sVar8 - 1 < 0xc0) {
            pcVar4 = (char *)((int)pvVar6 + 0x25e);
            FUN_ram_4ff45158(pcVar4,pcVar3,sVar8 + 1);
            puVar2 = DAT_ram_4ff6dc74;
            if (param_1 == 1) {
              sVar8 = strlen(__s);
              if (sVar8 != 0x10) {
                do {
                  *pcVar4 = '\0';
                  pcVar4 = pcVar4 + 1;
                } while (__s != pcVar4);
                pcVar3 = "manifest_url";
                goto LAB_ram_48030538;
              }
              FUN_ram_4819ad74((int)pvVar6 + 0x330,0x200,
                               "https://tesla.srlt.cc/api/p4/ota/manifest?device_id=%s&hardware_revision=%s&hardware_profile=%s"
                               ,__s,&DAT_ram_481c3ddc,&DAT_ram_481c3ddc);
              puVar2 = DAT_ram_4ff6dc74;
              FUN_ram_4ff45158(pvVar6,DAT_ram_4ff6dc74 + 0xe,0x1e5);
              uVar9 = *(undefined4 *)((int)pvVar6 + 0x2ecc);
              *(undefined4 *)((int)pvVar6 + 600) = DAT_ram_4ff6de60;
              *(undefined1 *)(puVar2 + 0x89) = 0;
              puVar2[0x1c6] = uVar9;
            }
            else {
              FUN_ram_4ff45158(pvVar6,DAT_ram_4ff6dc74 + 0xe,0x1e5);
              uVar9 = *(undefined4 *)((int)pvVar6 + 0x2ecc);
              *(undefined4 *)((int)pvVar6 + 600) = DAT_ram_4ff6de60;
              *(undefined1 *)(puVar2 + 0x89) = 1;
              puVar2[0x1c6] = uVar9;
              iVar7 = FUN_ram_48025ba6();
              DAT_ram_4ff5c5d8 = iVar7 + 120000;
              DAT_ram_4ff5c5dc = 1;
            }
            fence();
            DAT_ram_4ff6dc6c = *(undefined1 *)(DAT_ram_4ff6dc74 + 0x89);
            iVar7 = FUN_ram_4ff3e458(FUN_ram_4807c872,"online_ota",0x2000,pvVar6,1,&DAT_ram_4ff6dc70
                                     ,0);
            if (iVar7 == 1) {
              return cVar1;
            }
            fence();
            DAT_ram_4ff6dc6c = 0;
            DAT_ram_4ff6dc70 = 0;
            *(undefined1 *)(DAT_ram_4ff6dc74 + 0x89) = 0;
            do {
              *pcVar4 = '\0';
              pcVar4 = pcVar4 + 1;
            } while (__s != pcVar4);
            pcVar3 = "resource_wait";
LAB_ram_48030538:
            puVar2 = DAT_ram_4ff6dc74;
            DAT_ram_4ff6dc74[0x1c4] = "failed";
            puVar2[0x1c5] = pcVar3;
            return '\0';
          }
        }
      }
      pcVar3 = "cloud_credential";
      goto LAB_ram_480303c8;
    }
  }
  pcVar3 = "device_identity";
LAB_ram_480303c8:
  puVar2 = DAT_ram_4ff6dc74;
  DAT_ram_4ff6dc74[0x1c4] = "failed";
  puVar2[0x1c5] = pcVar3;
  return '\0';
}


